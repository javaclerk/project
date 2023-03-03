#include "../includes/ledfunc.h"

led::led(){
    // led_init();
    ledout[LED_TYPE_GNSS].open("/sys/class/gpio/gpio487/value");
    ledout[LED_TYPE_WAVE].open("/sys/class/gpio/gpio488/value");
    ledout[LED_TYPE_C_V2X].open("/sys/class/gpio/gpio489/value");
    ledout[LED_TYPE_5G].open("/sys/class/gpio/gpio490/value");
    ledout[LED_TYPE_RUN].open("/sys/class/gpio/gpio491/value");

}

void led::Out(){
    while(gpio_num < 6)
    {
        cout << "Select Your LED Status Insert ( 0 is off, 1 is on)" << endl;
        cin >> led_num;

        if(led_num == 1)
        {
            led::On((LED_TYPE)(gpio_num -1));
        }
        else if(led_num == 0)
        {
            led::Off((LED_TYPE)(gpio_num -1));
        }
        
    }
    else if(gpio_num == 6)
    {
        cout << "End of Prgram !!! " << endl;
    }
}

void led::On(LED_TYPE type){
    
    int value = 1;
    ledout[type] << value;
}


void led::Off(LED_TYPE type){

    int value = 0;
    ledout[type] << value;
}




// int led::led_init()
// {
    
// }