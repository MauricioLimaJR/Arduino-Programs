int ledPin =  9;    
int analogpin = A0;
int value = 0;
int x;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(analogpin, INPUT);
}

void loop()
{
  value = analogRead(analogpin);
  x = map(value, 0, 1023, 0, 255);
  analogWrite(ledPin, x);
  Serial.println(x);
  delay(100);
}

