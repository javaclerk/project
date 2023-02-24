#include "header.h"
#include "tempfunc.h"
c_data data;
stIpcMsg msg;
stmq mq;
sttime timer;
temperature temp;

int counter;

void * receive_thread(void * param) // 받는 스레드
{
  int limit = *(int *) param;

  while (counter<=msg.E)
  {
    receive(); // 메시지 큐 받기
  }

  return NULL;
}

void * sned_thread(void * param) // 보내는 스레드
{
  int limit = *(int *) param;

  mq.key = ftok("progfile2", 65); // 키 번호
  mq.msgid = msgget(mq.key, 0660 | IPC_CREAT); // 메시지 큐 id



while (counter<=msg.E)
{ 
  else if(msg.opcode==OPCODE_TEMP) // 온도, GPS일 경우 Interval을 위해 만들어둠
  {
    data.z++;
    data.counter+=msg.P;

    temp.Temp_Out();

    msg.mtype = 1; // 메시지 타입(크기)
    msg.S= msg.S+1;
    msg.Idata= (uint32_t)temp.value;
    printf("msg.Idata : %d \n", msg.Idata);

    msgsnd(mq.msgid, &msg, sizeof(msg)-sizeof(long), 0); // 메시지 보내기
    // sleep(1);  
  }
  else if(msg.opcode==OPCODE_GPS)
  {



   msgsnd(mq.msgid, &msg, sizeof(msg)-sizeof(long), 0); // 메시지 보내기 
  }
}
  return NULL;
}


int main()
{
  pthread_t add, sub; // 스레드 이름
  int param = 100;

  int sub_id = pthread_create(&sub, NULL, receive_thread, &param); // 보내는 스레드 끝나면 받는 스레드 생성
  if (sub_id < 0) // 받는 스레드 생성 안 됐을 경우 오류
  {
    perror("thread create error : ");
  }
  pthread_join(sub, NULL); //받는 스레드 끝날 때까지 대기

  int add_id = pthread_create(&add, NULL, sned_thread, &param); // 보내는 스레드 생성
  if (add_id < 0) // 보내는 스레드 생성 안 됐을 경우 오류
  {
    perror("thread create error : ");
  }
  
  pthread_join(add, NULL); // 보내는 스레드 끝날 때까지 대기

  msgctl(mq.msgid, IPC_RMID, NULL); 
  
  return 0;
}
// 갯수 가져오기
// 들어온 만큼 읽어서 버리기