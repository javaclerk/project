#include "header.h"

#define RECV_MSGQ_KEY 0x99999901
#define SEND_MSGQ_KEY 0x99999902

c_data data;
stIpcMsg msg;
stmq mq;
stmq mq2;
sttime timer;
// temperature temp;
int counter=1;

void * sned_thread(void * param) // 보내는 스레드
{
  int limit = *(int *) param;

  // while(1)
  // {
    memset(&data, 0, sizeof(c_data)); // 멤버 초기화
    exmaple(); // 입력 예시
    input(); // 실제 입력
    send(); // 메시지 큐 보내기

    int msize = 0;

    mq2.key = ftok("2", 64); // 키 번호
    mq2.msgid = msgget(RECV_MSGQ_KEY, 0666 | IPC_CREAT); // 메시지 큐 id
    // printf("Message receive err :  %d\n", mq2.msgid);
    while (1)
    {
      msgrcv(mq2.msgid, &msg, sizeof(msg)-sizeof(long), 0, 0); // 메시지 큐 받기
      printf("msgrcv \n");
      printf("msg.Idata : %d \n", msg.Idata);
      counter+=msg.P;

      // if((msize = msgrcv(mq2.msgid, &msg, sizeof(msg)-sizeof(long), 0, 0)) < 0) 
      // {
      //   if(errno == EINTR)  
      //     continue;
      //   else 
      //   {
      //     printf("Message receive err : %d %d\n", errno, mq2.msgid);
      //     continue;
      //   }
      // }
      // memset(&data, 0, sizeof(c_data)); // 멤버 초기화
    }
  // }
  // return NULL;
}

 
int main()
{
  pthread_t add, sub; // 스레드 이름
  int param = 100;
  int result;

  int add_id = pthread_create(&add, NULL, sned_thread, &param); // 보내는 스레드 생성
  if (add_id < 0) // 보내는 스레드 생성 안 됐을 경우 오류
  {
    perror("thread create error : ");
  }

  pthread_join(add, NULL); // 보내는 스레드 끝날 때까지 대기

  return 0;
}