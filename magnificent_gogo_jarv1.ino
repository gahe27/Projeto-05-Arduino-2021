const int pinLedR = 11, pinLedG = 10, pinLedB = 9;
const int pinPotR = 0, pinPotG = 2, pinPotB = 1;
void setup()
{
  Serial.begin(9600);
  pinMode(pinLedR, OUTPUT);
  pinMode(pinLedG, OUTPUT);
  pinMode(pinLedB, OUTPUT);
}

void loop()
{
  int valPotR = analogRead(pinPotR);
  int valPotG = analogRead(pinPotG);
  int valPotB = analogRead(pinPotB);

  Serial.print(valPotR);
  Serial.print(" ");
  Serial.print(valPotG);
  Serial.print(" ");
  Serial.println(valPotB);

  valPotR = map(valPotR, 0, 1023, 0, 255);
  valPotG = map(valPotG, 0, 1023, 0, 255);
  valPotB = map(valPotB, 0, 1023, 0, 255);
  
  analogWrite(pinLedR, valPotR);
  analogWrite(pinLedG, valPotG);
  analogWrite(pinLedB, valPotB);

  delay(100);
}