#include "reg52.h"

sbit LED1 = P2^0;//��P2���ַIO������ΪLED1

void delay_10us(unsigned int ten_us)//���Ƶ���˸ʱ�亯��
{
	while(ten_us--);
}

void main()
{
	while(1)
	{
		 LED1 = 0;
		 delay_10us(50000);// ����450ms
		 LED1 = 1;
		 delay_10us(50000);// Ϩ��450ms
	}
}