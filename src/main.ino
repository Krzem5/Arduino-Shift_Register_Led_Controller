#include <arduino.h>



void setup(){
	pinMode(2,OUTPUT);
	pinMode(3,OUTPUT);
	pinMode(4,OUTPUT);
}



void loop(){
	static uint8_t i=0;
	digitalWrite(3,LOW);
	shiftOut(2,4,LSBFIRST,i);
	digitalWrite(3,HIGH);
	delay(100);
	i++;
}
