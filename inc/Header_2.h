#ifndef A2HEADER_H_INCLUDED
#define A2HEADER_H_INCLUDED

/*Brief
* Initializes ADC by setting Aref = Avcc
*/
void ADC();

/*Brief
* Reads ADC output from a particular channel
* Parameter : Channel number of data type uint8_t
*/
uint16_t ReadADC(uint8_t ch);

#endif // A2HEADER_H_INCLUDED
© 2021 GitHub, Inc.
