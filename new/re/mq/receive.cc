#include "header.h"
#include "tempfunc.h"

temperature temp;

void receive() //메시지 큐 받음
{
    mq.key = ftok("progfile1", 65); // 키 번호
    mq.msgid = msgget(mq.key, 0666 | IPC_CREAT); // 메시지 큐 id
    msgrcv(mq.msgid, &msg, sizeof(msg)-sizeof(long), 0, 0); // 메시지 큐 받기

    if(msg.opcode==OPCODE_LED)
    {
        cout << " OP: " << msg.opcode << "LED NUMBER: " << msg.LN << "StartTime: " << msg.S << "EndTime: " << msg.E << "Pattern: " << msg.P << endl;
        printf("-----------------------------------------------------\n\n");
        
    }
    else if(msg.opcode==OPCODE_TEMP)
    {

        cout << " OP: " << msg.opcode << "Temp Sensor: " << msg.LN << "StartTime: " << msg.S << "EndTime: " << msg.E << "Interval: " << msg.P << endl;
        cout << "-----------------------------------------------------\n\n" << endl;
        temp.Temp_Out();
    }
    else if(msg.opcode==OPCODE_GPS)
    {
        cout << " OP: " << msg.opcode << "GPS Sensor: " << msg.LN << "StartTime: " << msg.S << "EndTime: " << msg.E << "Interval: " << msg.P << endl;
        printf("-----------------------------------------------------\n\n");
    }
}
