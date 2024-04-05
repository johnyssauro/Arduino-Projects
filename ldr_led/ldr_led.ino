#define pinLDR A0
#define pinLED 3


void setup() {
  
  pinMode(pinLDR, INPUT);
  pinMode(pinLED, OUTPUT);
  Serial.begin(9600);
  delay(1000);

}

void loop() {
  
  // Brighter places -> Less resistance in LDR
  // Dimmer places -> More resistance in LDR

  if(analogRead(pinLDR) > 0) {

    digitalWrite(pinLED, HIGH);
    Serial.println(analogRead(pinLDR));
    delay(1000);

  }

}
