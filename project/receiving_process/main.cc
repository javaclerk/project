#include "header.h"

c_data data;
stIpcMsg msg;
stmq mq;
sttime timer;
temperature temper;

void * receive_thread(void * param) // 받는 스레드
{
  int limit = *(int *) param;

  for (data.i=1; data.i<=limit; data.i++) // 혹시나 데이터 계속 받아올까봐 넣어둠(100회 루프)
  {
    receive(); // 메시지 큐 받기
    exit(1); // 강제 종료
  }
}

int main()
{
  pthread_t add, sub; // 스레드 이름
  int param = 100;
  int result;

  int sub_id = pthread_create(&sub, NULL, receive_thread, &param); // 보내는 스레드 끝나면 받는 스레드 생성
  if (sub_id < 0) // 받는 스레드 생성 안 됐을 경우 오류
  {
    perror("thread create error : ");
  }

  pthread_join(sub, NULL); //받는 스레드 끝날 때까지 대기

  msgctl(mq.msgid, IPC_RMID, NULL); //메시지 큐 비우기

  return 0;
}

