#include <reg52.h>
#include <intrins.h>

typedef unsigned char u8;
typedef unsigned int u16;

sbit lsa = P2^2;
sbit lsb = P2^3;
sbit lsc = P2^4;

u8 code smgduan[16] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,0x77,
						0x7c,0x39,0x5e,0x79,0x71};

void delay (u8 i)
{
	while (i--);
}

void DigDisplay ()
{
	u8 i;
	for (i=0;i<8;i++)
	{
	switch (i)
	{
		case (0):
			lsa = 0; lsb = 0; lsc = 0;break;
		case (1):
			lsa = 1; lsb = 0; lsc = 0;break;
		case (2):
			lsa = 0; lsb = 1; lsc = 0;break;
		case (3):
			lsa = 1; lsb = 1; lsc = 1; break;
		case (4):
			lsa = 0; lsb = 0; lsc = 1;break;
		case (5):
			lsa = 1; lsb = 0; lsc = 1;break;
		case (6):
			lsa = 0; lsb = 1; lsc = 1;break;
		case (7):
			lsa = 1; lsb = 1; lsc = 1;break;
		}
		P0 = smgduan[i+1];
		delay(10000);
		P0 = 0x00;
	}

}

void main ()
{
	
	while(1)
	{
	DigDisplay ();
	}
}
