const int pin23 = 23;
const int pin22 = 22;
const int pin21 = 21;
const int pin19 = 19;
const int pin18 = 18;
const int pin5 = 5;
const int pin4 = 4;
const int pin2 = 2;
const int pin15 = 15;
const int pin34 = 34;
const int pin35 = 35;
const int pin32 = 32;
const int pin33 = 33;
const int pin25 = 25;
const int pin26 = 26;
const int pin27 = 27;
const int pin14 = 14;
const int pin12 = 12;
const int pin13 = 13;

const int LED = 2;
 
void setup() {
  // put your setup code here, to run once:
  pinMode(pin23, OUTPUT);
  pinMode(pin22, OUTPUT);
  pinMode(pin21, OUTPUT);
  pinMode(pin19, OUTPUT);
  pinMode(pin18, OUTPUT);
  
  pinMode(pin5, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin15, OUTPUT);
  pinMode(pin34, OUTPUT);

  pinMode(pin35, OUTPUT);
  pinMode(pin32, OUTPUT);
  pinMode(pin33, OUTPUT);
  pinMode(pin25, OUTPUT);
  pinMode(pin26, OUTPUT);
  
  pinMode(pin27, OUTPUT);
  pinMode(pin14, OUTPUT);
  pinMode(pin12, OUTPUT);
  pinMode(pin13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin23, HIGH);
  digitalWrite(pin22, HIGH);
  digitalWrite(pin21, HIGH);
  digitalWrite(pin19, HIGH);
  digitalWrite(pin18, HIGH);
  
  digitalWrite(pin5, HIGH);
  digitalWrite(pin4, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin15, HIGH);
  digitalWrite(pin34, HIGH);

  digitalWrite(pin35, HIGH);
  digitalWrite(pin32, HIGH);
  digitalWrite(pin33, HIGH);
  digitalWrite(pin25, HIGH);
  digitalWrite(pin26, HIGH);
  
  digitalWrite(pin27, HIGH);
  digitalWrite(pin14, HIGH);
  digitalWrite(pin12, HIGH);
  digitalWrite(pin13, HIGH);
  delay(1000);

  digitalWrite(pin23, LOW);
  digitalWrite(pin22, LOW);
  digitalWrite(pin21, LOW);
  digitalWrite(pin19, LOW);
  digitalWrite(pin18, LOW);
  
  digitalWrite(pin5, LOW);
  digitalWrite(pin4, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin15, LOW);
  digitalWrite(pin34, LOW);

  digitalWrite(pin35, LOW);
  digitalWrite(pin32, LOW);
  digitalWrite(pin33, LOW);
  digitalWrite(pin25, LOW);
  digitalWrite(pin26, LOW);
  
  digitalWrite(pin27, LOW);
  digitalWrite(pin14, LOW);
  digitalWrite(pin12, LOW);
  digitalWrite(pin13, LOW);
  delay(1000);
}