#ifndef _LEDFUNC_H_
#define _LEDFUNC_H_

#include <iostream>
#include <fstream>

#include "data.h"

using namespace std;

extern int gpio_num,led_num;

class led{
public:

led();
ofstream ledout[5];

void On(LED_TYPE type);
void Off(LED_TYPE type);
void Out();
// int led_init();

};

#endif