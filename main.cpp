/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */


#include "mbed.h"



int main()
{
    // Initialise the digital pin LED1 as an output
    DigitalOut led1(LED1);
    // Initialise the digital pin LED2 as an output
    DigitalOut led2(LED2);

    //Toggle the LEDs
    while (1)
     {
        led1 = !led1;
        ThisThread::sleep_for(2s);

        led2 = !led2;
        ThisThread::sleep_for(5s);
    }
}
