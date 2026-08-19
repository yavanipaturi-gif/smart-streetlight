int ldrpin = A0;
int ledpin = 9;

void setup() {
  pinMode(ledpin, OUTPUT);
  serial.begin(9600);
}
void loop(){
  int lightValue = analogRead(ldrpin);

  serial.println(lightValue);
  if(lightValue < 500) {
    digitalWiring(ledPin, HIGH);
  }
  else {
     digitalWrite(ledPin, Low);
  }
   delay(500);
}

