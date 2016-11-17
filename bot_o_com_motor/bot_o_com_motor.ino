//int led = 10;
int chave = 10;
int ligar=0;
float controle = 0;
int  button = 9;
int estado=1; 

void setup() {
  Serial.begin(9600);
  pinMode(chave, OUTPUT);
  pinMode(button, INPUT);
  
}

void loop()
{
  ligar = digitalRead(button);
  controle+=0.05;
  if (ligar == HIGH && controle > 1.0){
    estado= estado+1;
    controle=0;
  }
  if(estado%2==0){
       digitalWrite(chave, HIGH);
   }
  else
    digitalWrite(chave, LOW);
    
    delay(50);
    Serial.print(estado);
    Serial.print("  --  ");
    Serial.println(controle);
 
}

