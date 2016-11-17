int pot = A0;
int valorPot=0;
int chave = 10;
int ligar=0;
float controle = 0;
int  button = 9;
int estado=1; 
int x = 0;

void setup() {
  Serial.begin(9600);
  pinMode(chave, OUTPUT);
  pinMode(button, INPUT);
  pinMode(pot, INPUT);
  
}

void loop()
{
  ligar = digitalRead(button);
  controle+=0.05;
  valorPot = analogRead(pot);
  x = map(valorPot, 0, 1023, 0, 255);
  
  if (ligar == HIGH && controle > 1.0){
    estado= estado+1;
    controle=0;
  }
  if(estado%2==0){
       //digitalWrite(chave, HIGH);
       analogWrite(chave, x);
   }
  else
    //digitalWrite(chave, LOW);
    analogWrite(chave, 0);
    
    delay(50);
    Serial.print(estado);
    Serial.print("  --  ");
    Serial.print(controle);
    Serial.print("  --  ");
    Serial.println(x);
 
}

