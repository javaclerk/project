#include "../includes/header.h"
// temperature temp;

extern int counter;

void receive() //메시지 큐 받음
{
    temperature temp;

    mq.key = ftok("progfile1", 65); // 키 번호
    mq.msgid = msgget(mq.key, 0666 | IPC_CREAT); // 메시지 큐 id
    
    msgrcv(mq.msgid, &msg, sizeof(msg)-sizeof(long), 0, 0); // 메시지 큐 받기

    if(msg.opcode==1)
    {
        printf(" OP: %x  LED Number: %x  StartTime: %d  EndTime: %d  pattern: %x \n", msg.opcode, msg.LN, msg.S, msg.E, msg.P);
        printf("-----------------------------------------------------\n\n");
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

        printf("temperature is :: %d ℃\n", msg2.Idata);
        
        msgsnd(mq2.msgid2, &msg2, sizeof(msg2)-sizeof(long), IPC_CREAT); // 메시지 보내기
        counter+=msg.P;
        sleep(msg.E);
        }
    }
    else if(msg.opcode == 3)
    {
        printf(" OP: %x  GPS Sensor: %x  StartTime: %d  EndTime: %d  Interval: %x \n", msg.opcode, msg.LN, msg.S, msg.E, msg.P);
        printf("-----------------------------------------------------\n\n");
    }
}
