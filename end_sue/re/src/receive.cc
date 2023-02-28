#include "../includes/header.h"
#define RECV_MSGQ_KEY 0x99999901
#define SEND_MSGQ_KEY 0x99999902


extern int counter;

void receive() //메시지 큐 받음
{
    temperature temp;
    led led;


    mq.msgid = msgget(SEND_MSGQ_KEY, 0666 | IPC_CREAT); // 메시지 큐 id
    mq2.msgid2 = msgget(RECV_MSGQ_KEY, 0666 | IPC_CREAT); // 메시지 큐 id
    
    msgrcv(mq.msgid, &msg, sizeof(msg)-sizeof(long), 0, 0); // 메시지 큐 받기

    if(msg.opcode==1)
    {
        printf(" OP: %x  LED Number: %x  StartTime: %d  EndTime: %d  pattern: %x \n", msg.opcode, msg.LN, msg.S, msg.E, msg.P);
        printf("-----------------------------------------------------\n\n");
        led.Out();
    }
    else if(msg.opcode==2)
    {
        printf(" OP: %x  Temp Sensor: %x  StartTime: %d  EndTime: %d  Interval: %x \n", msg.opcode, msg.LN, msg.S, msg.E, msg.P);
        printf("-----------------------------------------------------\n\n");
        while(counter<=msg.E)
      {
        temp.Temp_Out();
        msg2.mtype = 1; // 메시지 타입(크기)
        msg2.Idata= (uint32_t)temp.value;
        msgsnd(mq2.msgid2, &msg2, sizeof(msg2)-sizeof(long), IPC_CREAT); // 메시지 보내기
        counter+=msg.P;
        sleep(msg.E);
      }
    }
    else
    {
        printf(" OP: %x  GPS Sensor: %x  StartTime: %d  EndTime: %d  Interval: %x \n", msg.opcode, msg.LN, msg.S, msg.E, msg.P);
        printf("-----------------------------------------------------\n\n");
      //   while(counter<=msg.E)
      // {
      //   msg2.mtype = 1; // 메시지 타입(크기)
      //   msg2.Idata= led.Out();
      //   msgsnd(mq2.msgid2, &msg2, sizeof(msg2)-sizeof(long), IPC_CREAT); // 메시지 보내기
      //   counter+=msg.P;
      //   sleep(msg.E);
      // }
    }
}
