#include "header.h"
#include "tempfunc.h"
c_data data;
stIpcMsg msg;
stmq mq;
stmq2 mq2;
sttime timer;
temperature temp;
stIpcMsg2 msg2;
#define RECV_MSGQ_KEY 0x99999901
#define SEND_MSGQ_KEY 0x99999902

int counter=1;

void * receive_thread(void * param) // 받는 스레드
{
  int msize=0;
  int limit = *(int *) param;

  mq.msgid = msgget(SEND_MSGQ_KEY, 0666 | IPC_CREAT); // 메시지 큐 id
  mq2.msgid2 = msgget(RECV_MSGQ_KEY, 0666 | IPC_CREAT); // 메시지 큐 id

  while (1)
  {
    msgrcv(mq.msgid, &msg, sizeof(msg)-sizeof(long), 0, 0); // 메시지 큐 받기

    if(msg.opcode==2 || msg.opcode==3)
    {
      while(counter<=msg.E)
      {
        temp.Temp_Out();
        
        msg2.mtype = 1; // 메시지 타입(크기)
        msg2.Idata= (uint32_t)temp.value;

        printf("msg.Idata : %d \n", msg2.Idata);
        
        msgsnd(mq2.msgid2, &msg2, sizeof(msg2)-sizeof(long), IPC_CREAT); // 메시지 보내기
        counter+=msg.P;
        sleep(msg.E);
      }
      printf("------------------------------------------\n");
      memset(&data, 0, sizeof(c_data)); // 멤버 초기화
      memset(&msg, 0, sizeof(stIpcMsg)); // 멤버 초기화
      counter=1;
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
  
  return 0;
}
