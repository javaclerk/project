#include "header.h"
using namespace std;

ledpattern::ledpattern(){
    clock_t start =clock();

    for (;;){
        clock_t end = clock();
        double time = double(end - start) / CLOCKS_PER_SEC;
    }

}

void ledpattern1(){

    switch((LED_TYPE)(gpio_num -1))
    {
        case LED_TYPE_GNSS:
        while(time)
        {
            led.On(time(on_pattern1));
            led.Off(time(off_pattenr1));
        }

        case LED_TYPE_WAVE:
        while(time)
        {
            led.On(time(on_pattern1));
            led.Off(time(off_pattern1));

        }

        case LED_TYPE_C_V2X:
        while(time)
        {
            led.On(time(on_pattern1))
        }


    }
}