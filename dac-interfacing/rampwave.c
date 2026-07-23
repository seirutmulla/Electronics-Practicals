#include<xc.h>
#pragma config OSC = HS // use high-speed external osc crystal
#pragma config PWRT = OFF
#pragma config WDT=OFF
#pragma config DEBUG = OFF
#pragma config LVP=OFF
void main()
{
    TRISB=0X00;
    PORTB=0X00;
    while(1)
    {
        unsigned char i;
        for(i=0;i<255;i++)
        {
            PORTB = i;
        }
    }
}
