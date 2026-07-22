#include<xc.h>
#pragma config OSC = HS //use high speed oscillator
#pragma config PWRT = OFF //power up timer kept off to prevent CPU to go into reset state
#pragma config WDT = OFF //watchdog timer kept off to prevent CPU to go into reset state
#pragma config DEBUG = OFF //keeping DEBUG off as it uses RB5; all 8 pins of PORTB are used in this program.
#pragma config LVP = OFF //keeping LVP off as it uses RB6 and RB7; all 8 pins of PORTB are used in this program.
void main()
{
  unsigned char
  s[]={0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x83, 0xf8, 0x80, 0x98}, wheel1; //s[] contains hex values obtained from observing the logic in a common anode display

  TRISC=0xFF;
  PORTC=0xFF; //make PORTC input to thumbwheel
  TRISB=0x00;
  PORTB=0x00; //make PORTB output for display
  while(1)
    {
      wheel1=PORTC & 0x0F; //read thumbwheel 1 and eliminate the upper nibble
      PORTB=s[wheel1]; //Display wheel1 data on PORTB
    }
}
