#include "../includes/tempfunc.h"
#include "../includes/header.h"

// temperature::temperature()
// {
//     in[TEMP_TYPE_0].open("/sys/class/thermal/thermal_zone0/temp");
//     in[TEMP_TYPE_1].open("/sys/class/thermal/thermal_zone1/temp");
// }

void temperature::Temp_Out()
{
    if(msg.LN == 1)
    {
        temperature::Temp_Zone0((TEMP_TYPE)(msg.opcode -1));
    }

    else if(msg.LN == 2)
    {
        temperature::Temp_Zone1((TEMP_TYPE)(msg.opcode -1));
    }
}

void temperature::Temp_Zone0(TEMP_TYPE type)
{
    ifstream in("/sys/class/thermal/thermal_zone0/temp");
    in >> value;
    std::cout << "temp_zone0 temperature is :: " << value << "℃" << std::endl;
    msgctl(mq.msgid, IPC_RMID, NULL); 
}

void temperature::Temp_Zone1(TEMP_TYPE type)
{
    ifstream in("/sys/class/thermal/thermal_zone1/temp");  
    in >> value;
    std::cout << "temp_zone1 temperature is :: " << value << "℃" << std::endl;
}