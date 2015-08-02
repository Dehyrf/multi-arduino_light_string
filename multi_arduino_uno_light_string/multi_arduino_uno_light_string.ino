const int pinOutput = 13;      // the number of the LED pins
const int pin1 = 1;
const int pin2 = 2;
const int pin3 = 3;
const int pin4 = 4;
const int pin5 = 5;
const int pin6 = 6;
const int pin7 = 7;
const int pin8 = 8;
const int pin9 = 9;
const int pin10 = 10;
const int pin11 = 11;
const int pin12 = 12;
const int pinInput = 0;

int changeme_blinkInterval = 100;           // change to change interval at which to blink (milliseconds)
int signalTime = 75;
boolean isMaster = true;


void setup() {
pinMode(pinOutput, OUTPUT); 
pinMode(pin1, OUTPUT);
pinMode(pin2, OUTPUT);
pinMode(pin3, OUTPUT);
pinMode(pin4, OUTPUT);
pinMode(pin5, OUTPUT);
pinMode(pin6, OUTPUT);
pinMode(pin7, OUTPUT);
pinMode(pin8, OUTPUT);
pinMode(pin9, OUTPUT);
pinMode(pin10, OUTPUT);
pinMode(pin11, OUTPUT);
pinMode(pin12, OUTPUT);
pinMode(pinInput, INPUT);

for(int i = 0; i < 100;i++)
{
  if(digitalRead(pinInput)==HIGH)
  {
    isMaster = false;
  }
  delay(50);
} 
  digitalWrite(pinOutput,HIGH);
  delay(15000);
  digitalWrite(pinOutput,LOW);
}


void loop()
{
  if(digitalRead(pinInput)==HIGH && !isMaster)
  {
    for(int i = 1;i<13;i++)
    {
      digitalWrite(i,HIGH);
      delay(changeme_blinkInterval);
      digitalWrite(i,LOW);      
    }
     digitalWrite(pinOutput,HIGH);
     delay(signalTime);
     digitalWrite(pinOutput,LOW);
  }
  if(isMaster)
  {
    delay(changeme_blinkInterval*13);
    digitalWrite(pinOutput,HIGH);
    delay(signalTime);
    digitalWrite(pinOutput,LOW);
  }
}

