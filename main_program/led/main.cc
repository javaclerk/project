#include "includes/ledfunc.h" 

using namespace std;

int gpio_num, led_num;

int main(){
    
    led led;
    
    cout << "This is LED Controller" << endl;
    cout << "Please Choose What Led You Want to Control" << endl;
    cout << "1.GNSS LED    2.WAVE LED    3.C-V2X LED    4.5G LED    5.RUN LED    6.EXIT" << endl;
    cin >> gpio_num;
    while(gpio_num == 6)
    {
        led.Out();
    }
    return 0;
}

