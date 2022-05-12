#include "reg52.h"

#define SMG_A_DP_PORT P0

unsigned char gsmg_code[17] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,
							   0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,
							   0x79,0x71};//π≤“ı0-F
void delay_10us(unsigned int ten_us)
{
	while(ten_us--);
}

void main()
{
	int i = 0;
	
	while(1)
	{
		for(i=0;i<16;i++)
		{
			SMG_A_DP_PORT = ~gsmg_code[i]; 
			delay_10us(50000); 
			delay_10us(50000);
		}
		
	}
}