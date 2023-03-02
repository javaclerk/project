#include "includes/ledfunc.h" 

using namespace std;

int gpio_num, led_num;

int main(){
    
    led led;
    
    cout << "This is LED Controller" << endl;
    cout << "Please Choose What Led You Want to Control" << endl;
    led.Out();
    
    return 0;
}

