#include "reg52.h"

sbit BEEP = P2^5;

void delay_10us(unsigned int ten_us)
{
	while(ten_us--);
}

void main()
{
	unsigned int a = 600;
	unsigned int b = 600;
	unsigned int c = 600;
	
	while(1)
	{
		while(a--)
		{
			BEEP = !BEEP;
			delay_10us(300);//Ƶ�ʵ�������ʱ��ĵ�����������0.5kHz
		}

		a = 0;
		BEEP = 0;

		while(b--)
		{
			BEEP = 0;
			delay_10us(150);//Ƶ�ʵ�������ʱ��ĵ�����������1.0kHz
			BEEP = 1;
			delay_10us(250);
			
		}

		b = 0;
		BEEP = 0;

		while(c--)
		{
			BEEP = 0;
			delay_10us(200);//Ƶ�ʵ�������ʱ��ĵ�����������1.5kHz
			BEEP = 1;
			delay_10us(300);
			
		}
		c = 0;
		BEEP = 0;
	}
}