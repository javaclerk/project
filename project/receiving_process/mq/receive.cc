#include "header.h"

void sigint_handler(int signo) // 알람
{
    c_data data;
stIpcMsg msg;
stmq mq;
sttime timer;
    temperature temper;

    cout << "Interval : " << data.z << endl;  // 몇 번 받았나 보려고 넣어둠
    if(msg.opcode == 2)
    {
        temper.Temp_Out();
    }
    // // else if(msg.opcode == 3)
    // {
    //   gps.gps_out();
    // }
    data.z++;
    data.counter+=data.patter;
    alarm(data.patter);
}

void receive() //메시지 큐 받음
{

    mq.key = ftok("progfile", 65); // 키 번호
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
        alarm( data.patter );
        data.counter+=data.patter;
        while( data.counter <= timer.EndTime ) // 끝나는 시간보다 카운터가 작으면 계속 동작
        {
            signal( SIGALRM, sigint_handler); // 알람 함수 호출
        }
    }
    else
    {
        printf(" OP: %x  GPS Sensor: %x  StartTime: %d  EndTime: %d  Interval: %x \n", msg.opcode, msg.LN, msg.S, msg.E, msg.P);
        printf("-----------------------------------------------------\n\n");
        alarm( data.patter );
        data.counter+=data.patter;
        while( data.counter <= timer.EndTime ) // 끝나는 시간보다 카운터가 작으면 계속 동작
        {
            signal( SIGALRM, sigint_handler); // 알람 함수 호출
        }
    }
}

