#include "includes/ledfunc.h" 

using namespace std;

int gpio_num, led_num;

int main(){
    
    led led;
    
    cout << "This is LED Controller" << endl;
    while(gpio_num == 6)
    {
        led.Out();
    }
    return 0;
}

