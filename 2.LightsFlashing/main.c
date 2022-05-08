#include "reg52.h"

sbit LED1 = P2^0;//将P2零地址IO重命名为LED1

void delay_10us(unsigned int ten_us)//控制灯闪烁时间函数
{
	while(ten_us--);
}

void main()
{
	while(1)
	{
		 LED1 = 0;
		 delay_10us(50000);// 点亮450ms
		 LED1 = 1;
		 delay_10us(50000);// 熄灭450ms
	}
}