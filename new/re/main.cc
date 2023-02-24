#include "header.h"
#include "tempfunc.h"
c_data data;
stIpcMsg msg;
stmq mq;
stmq mq2;
sttime timer;
temperature temp;

#define RECV_MSGQ_KEY 0x99999901
#define SEND_MSGQ_KEY 0x99999902
int counter=1;
void * receive_thread(void * param) // 받는 스레드
{
  int limit = *(int *) param;

  mq.key = ftok("progfile1", 65); // 키 번호
  mq.msgid = msgget(SEND_MSGQ_KEY, 0666 | IPC_CREAT); // 메시지 큐 id

  mq2.key = ftok("2", 66); // 키 번호
  mq2.msgid = msgget(RECV_MSGQ_KEY, 0666 | IPC_CREAT); // 메시지 큐 id

  // msgrcv(mq.msgid, &msg, sizeof(msg)-sizeof(long), 0, 0); // 메시지 큐 받기
  
  // while (1)
  {
    msgrcv(mq.msgid, &msg, sizeof(msg)-sizeof(long), 0, 0); // 메시지 큐 받기

    printf(" OP: %x  LED Number: %x  StartTime: %d  EndTime: %d  pattern: %x \n", msg.opcode, msg.LN, msg.S, msg.E, msg.P);

    while(counter<=msg.E)
    {
      temp.Temp_Out();
      
      msg.mtype = 1; // 메시지 타입(크기)
      msg.S= msg.S+1;
      msg.Idata= (uint32_t)temp.value;
      printf("msg.Idata : %d \n", msg.Idata);

      msgsnd(mq2.msgid, &msg, sizeof(msg)-sizeof(long), 0); // 메시지 보내기

      counter+=msg.P;
      sleep(msg.E);
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

  msgctl(mq.msgid, IPC_RMID, NULL); 
  
  return 0;
}