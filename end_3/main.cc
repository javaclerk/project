#include "header.h"

c_data data;
stIpcMsg msg;
stmq mq;
sttime timer;
temperature temp;

void sigint_handler( int signo) // 알람
{
  cout << "Interval : " << data.z << endl;  // 몇 번 받았나 보려고 넣어둠
  if(msg.opcode == 2)
  {
    temp.Temp_Out();
  }
  // else if(msg.opcode == 3)
  // {
  //   gps.gps_out();
  // }
  data.z++;
  data.counter+=data.patter;
  alarm(data.patter);
}

void * sned_thread(void * param) // 보내는 스레드
{
  int limit = *(int *) param;

  memset(&data, 0, sizeof(c_data)); // 멤버 초기화
  exmaple(); // 입력 예시
  input(); // 실제 입력
  send(); // 메시지 큐 보내기
}

void * receive_thread(void * param) // 받는 스레드
{
  int limit = *(int *) param;

  for (data.i=1; data.i<=limit; data.i++) // 혹시나 데이터 계속 받아올까봐 넣어둠(100회 루프)
  {
    receive(); // 메시지 큐 받기
    if(data.opcode==2 || data.opcode==3) // 온도, GPS일 경우 Interval을 위해 만들어둠
    {
      alarm( data.patter );
      data.counter+=data.patter;
      while( data.counter <= timer.EndTime ) // 끝나는 시간보다 카운터가 작으면 계속 동작
      {
        signal( SIGALRM, sigint_handler); // 알람 함수 호출
      }
    }
    exit(1); // 강제 종료
  }
}
 
int main()
{
  pthread_t add, sub; // 스레드 이름
  int param = 100;

  msgctl(mq.msgid, IPC_RMID, NULL); // 메시지 큐 비우기

  int add_id = pthread_create(&add, NULL, sned_thread, &param); // 보내는 스레드 생성
  if (add_id < 0) // 보내는 스레드 생성 안 됐을 경우 오류
  {
    perror("thread create error : ");
  }
  
  pthread_join(add, NULL); // 보내는 스레드 끝날 때까지 대기

  int sub_id = pthread_create(&sub, NULL, receive_thread, &param); // 보내는 스레드 끝나면 받는 스레드 생성
  if (sub_id < 0) // 받는 스레드 생성 안 됐을 경우 오류
  {
    perror("thread create error : ");
  }
  pthread_join(sub, NULL); //받는 스레드 끝날 때까지 대기

  return 0;
}