//int led = 10;
int chave = 10;
char ligar = 0;
int  button = 9;

void setup() {
  Serial.begin(9600);
  pinMode(chave, OUTPUT);
  pinMode(button, INPUT);
  
}

void loop()
{
  ligar = digitalRead(button);
  
  if (ligar == HIGH)
    digitalWrite(chave, HIGH);
  else
    digitalWrite(chave, LOW);
  /*
  if(Serial.available()){
    ligar = Serial.read();
    Serial.println(ligar);
    if(ligar == 'l'){
      analogWrite(chave, 255);
    }
    else{
      digitalWrite(chave, LOW);
    }
  }*/
}

