#include "header.h"
// temperature temp;


void receive() //메시지 큐 받음
{
    mq.key = ftok("progfile1", 65); // 키 번호
    mq.msgid = msgget(mq.key, 0666 | IPC_CREAT); // 메시지 큐 id
    
    msgrcv(mq.msgid, &msg, sizeof(msg)-sizeof(long), 0, 0); // 메시지 큐 받기

    // if(msg.opcode==1)
    // {
        printf(" OP: %x  LED Number: %x  StartTime: %d  EndTime: %d  pattern: %x \n", msg.opcode, msg.LN, msg.S, msg.E, msg.P);
        printf("-----------------------------------------------------\n\n");
    // }
    // else if(msg.opcode==2)
    // {
    //     printf(" OP: %x  Temp Sensor: %x  StartTime: %d  EndTime: %d  Interval: %x \n", msg.opcode, msg.LN, msg.S, msg.E, msg.P);
    //     printf("-----------------------------------------------------\n\n");
    // }
    // else
    // {
    //     printf(" OP: %x  GPS Sensor: %x  StartTime: %d  EndTime: %d  Interval: %x \n", msg.opcode, msg.LN, msg.S, msg.E, msg.P);
    //     printf("-----------------------------------------------------\n\n");
    // }
}
