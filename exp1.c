		#include<LPC214X.h>
void  delay(){
	unsigned int i=0;
	while(i<200000){
		i++;
	}
}
int main(){
	//set the direction as output
	IODIR0 |=(0x01<<16);
	while(1){
	//turn on led
		IOSET0 |=(0x01<<16);
	delay();
	
	//turn off led
	IOCLR0 |=(0x01<<16);

	//turn off led
		delay();
	}
}