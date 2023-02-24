#include "header.h"

#define RECV_MSGQ_KEY 0x99999901
#define SEND_MSGQ_KEY 0x99999902

c_data data;
stIpcMsg msg;
stmq mq;
stmq2 mq2;
sttime timer;
stIpcMsg2 msg2;
// temperature temp;
int counter=1;
bool isreceive=false;

void * sned_thread(void * param) // 보내는 스레드
{
  printf("sned_thread \n");
  int limit = *(int *) param;

  mq.key = ftok("progfile1", 65); // 키 번호
  mq.msgid = msgget(SEND_MSGQ_KEY, 0666 | IPC_CREAT); // 메시지 큐 id

  exmaple(); // 입력 예시
  input(); // 실제 입력
  send(); // 메시지 큐 보내기

  // while(1)
  // {
    // if(counter>msg.E) // 데이터가 true면
    // {
      while(1)
      {
        memset(&data, 0, sizeof(c_data)); // 멤버 초기화
        memset(&msg, 0, sizeof(stIpcMsg)); // 멤버 초기화
        printf("yes1\n");
        exmaple(); // 입력 예시
        printf("exmaple %d\n", data.opcode);
        input(); // 실제 입력
        printf("input %d\n", data.opcode);
        send(); // 메시지 큐 보내기
        counter=1;
      // return (void *)false;
      }
    // }
    sleep(2);
  // }
  return NULL;
}


void * receive_thread(void * param) // 받는 스레드
{
  printf("receive_thread start\n");
  int limit = *(int *) param;

  mq2.key = ftok("2", 64); // 키 번호
  mq2.msgid = msgget(RECV_MSGQ_KEY, 0666 | IPC_CREAT); // 메시지 큐 id
  
  while (1)
  {
      // if(data.opcode==2 || data.opcode==3)
      // {
        // while (counter<=msg.E)
        // {
          msgrcv(mq2.msgid, &msg2, sizeof(msg2)-sizeof(long), 0, 0); // 메시지 큐 받기
          printf("TEMP : %d \n", msg2.Idata);
          // counter+=msg.P;
          // bool isreceive=false;
          // bool 만들고 isreceive==true? > send 다시 시작
          // enter 누르면 시작하게?
        // }
        // printf("true \n");
        // return (void*)true;
      // }
      // printf("true\n");
      // bool isreceive=true;
  }
  return NULL;
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

  printf("add end\n");

  int sub_id = pthread_create(&sub, NULL, receive_thread, &param); // 보내는 스레드 끝나면 받는 스레드 생성
  if (sub_id < 0) // 받는 스레드 생성 안 됐을 경우 오류
  {
    perror("thread create error : ");
  }

  //pthread_join(add, NULL); // 보내는 스레드 끝날 때까지 대기
  pthread_join(sub, NULL); //받는 스레드 끝날 때까지 대기

  // pthread_join(add, NULL); // 보내는 스레드 끝날 때까지 대기

  return 0;
}