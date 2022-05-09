#include "reg52.h"

#define LED_PORT P2

void delay_10us(unsigned int ten_us)
{
	while(ten_us--);
}

void main()
{
	unsigned char i = 0;
	
	while(1)
	{
		for(i=0;i<8;i++)
		{
			 LED_PORT = ~(0x01<<i);
			 delay_10us(50000);
			 
		}
		for(i=6;i>0;i--)
		{
			LED_PORT = ~(0x01<<i);
			delay_10us(50000);
		}
	}
}