
#include <avr/io.h>
#include <util/delay.h>
#include <Header_1.h>
#include <Header_2.h>
#include <Header_3.h>
#include <Header_4.h>
int main(void)
{
    PortSet();
    ADC();
    USART(103);
    while(1)
    {
        Button_call();
        ADCRead(0);
        PWM();
        Pulse();
        USARTWriteChar();


    }
    return 0;
}
