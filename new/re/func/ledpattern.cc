#include "../includes/header.h"

using namespace std;

c_data data;
LED_PATTERN led_pattern;
led led;

void pattern1()
{
    switch(LED_TYPE type)
    {
        case LED_TYPE_GNSS:
        led.On();
        sleep[4];
        led.Off();
        sleep[1];
        led.On();
        sleep[1];
        led.Off();
        sleep[2];
        led.On();
        sleep[2];
        led.Off();
        sleep[3];
        led.On();
        sleep[3];
        led.Off();
        sleep[4];
        led.On();
        sleep[4];
        led.Off();
        sleep[1];
        led.On();
        sleep[1];
        led.Off();
        sleep[2];
        led.On();
        sleep[2];
        led.Off();
        break;
    }
}

