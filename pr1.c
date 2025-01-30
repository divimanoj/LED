#include <reg51.h>
#define LED P3
sbit S=P2^0;

long int i;
void main()
{
	while(1)
	{
		if(S == 0){
			LED=0xFF;
		}
		else{
			LED=0x00;
			for(i=0;i<7500;i++);
			LED=0xFF;
			for(i=0;i<7500;i++);
		}
	}
}
