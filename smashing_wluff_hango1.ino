// C++ code
//
int green=13;
int red=12;
int yellow=11;
int white=10;
int blue=9;
int orange=8;

void setup()
{
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(white, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(orange, OUTPUT);
}

void loop()
{
  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(white, LOW);
  digitalWrite(blue, HIGH);
  digitalWrite(orange, LOW);
  delay(1000);
  
  
  digitalWrite(green, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(white, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(orange, LOW);
  delay(1000);
  
  
  digitalWrite(green, LOW);
  digitalWrite(red, LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(white, LOW);
  digitalWrite(blue, LOW);
  digitalWrite(orange, HIGH);
  delay(1000);
  
  digitalWrite(green, LOW);
  digitalWrite(red, LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(white, LOW);
  digitalWrite(blue, HIGH);
  digitalWrite(orange, HIGH);
  delay(1000);
  
}