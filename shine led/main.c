#include <reg52.h>
typedef unsigned int u16;
typedef unsigned char u8;

sbit led = P2^0; //����������
sbit kaigaun = P2^1;

void delay(u16 i)//��ʱ����
{
	while (i--);
}
void main ()
{	 int flag = 0; //
	while (1)
	{
	  led = 0;
	  delay(50000);
	   if (flag == 1)
	   {
	   led  = 1;
	   kaiguan = 1
	   delay (50000);
	   }
	  
	}

}