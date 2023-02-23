#include "header.h"

c_data data;
stIpcMsg msg;
stmq mq;
sttime timer;
// temperature temp;


void * sned_thread(void * param) // 보내는 스레드
{
  int limit = *(int *) param;

  memset(&data, 0, sizeof(c_data)); // 멤버 초기화
  exmaple(); // 입력 예시
  input(); // 실제 입력
  send(); // 메시지 큐 보내기

  return NULL;
}
 
int main()
{
  pthread_t add, sub; // 스레드 이름
  int param = 100;
  int result;

  msgctl(mq.msgid, IPC_RMID, NULL); // 메시지 큐 비우기

  int add_id = pthread_create(&add, NULL, sned_thread, &param); // 보내는 스레드 생성
  if (add_id < 0) // 보내는 스레드 생성 안 됐을 경우 오류
  {
    perror("thread create error : ");
  }
  
  pthread_join(add, NULL); // 보내는 스레드 끝날 때까지 대기

  return 0;
}