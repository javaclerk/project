#include "../includes/header.h"

c_data data;
stIpcMsg msg;
stmq mq;
stmq2 mq2;
sttime timer;
temperature temp;
stIpcMsg2 msg2;

int counter=1;

void * receive_thread(void * param) // 받는 스레드
{
  int msize=0;
  int limit = *(int *) param;

  while (1)
  {
    msgrcv(mq.msgid, &msg, sizeof(msg)-sizeof(long), 0, 0); // 메시지 큐 받기

    receive();

    printf("------------------------------------------\n");
    memset(&data, 0, sizeof(c_data)); // 멤버 초기화
    memset(&msg, 0, sizeof(stIpcMsg)); // 멤버 초기화
    counter=1;

  }

  msgctl(mq.msgid, IPC_RMID, NULL);

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
