
#include <avr/io.h>
#include <util/delay.h>
#include <A1Header.h>
#include <A2Header.h>
#include <A3Header.h>
#include <A4Header.h>
int main(void)
{
    PortSet();
    ADC();
    USARTInit(103);
    while(1)
    {
        Buttons();
        ReadADC(0);
        PWM();
        Pulse();
        USARTWriteChar();


    }
    return 0;
}
