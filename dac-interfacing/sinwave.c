#include<xc.h>
#pragma config OSC = HS // use high-speed external osc crystal
#pragma config PWRT = OFF
#pragma config WDT=OFF
#pragma config DEBUG = OFF
#pragma config LVP=OFF
void main()
{
    static int a[13]= {128,192,238,255,238,192,128,64,17,0,17,64,128};
    unsigned char i=0;
    TRISB=0X00;
    PORTB=0X00;
    while(1)
    {
        for(i=0;i<13;i++)
        {
            PORTB = a[i];

        }
    }
}
