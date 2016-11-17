#include "Ultrasonic.h"

Ultrasonic ultrasonic(1,2);
unsigned long microsec =0;
int distanciaCM=0;

//Declarar outros pinos

int rele = 3;
int valorMotor = 0;

void setup(){
Serial.begin(9600);
pinMode(rele, OUTPUT);
}

void loop(){
//Ler o sensor
microsec = ultrasonic.timing();
distanciaCM = ultrasonic.convert(microsec, Ultrasonic::CM);
if(distanciaCM >30)
  distanciaCM = 30;

valorMotor = converte(distanciaCM);

//delay(1000);
analogWrite(rele, valorMotor);
Serial.print(distanciaCM);
Serial.print("  --  ");
Serial.println(valorMotor);

}

int converte(int input){
return (input*1023)/30;
}
