#define pinTrg 3
#define pinEch 4

// Speed of sound in m/s
const float speedSound = 340;

void setup() {
  
  pinMode(pinTrg, OUTPUT);
  pinMode(pinEch, INPUT);
  Serial.begin(9600);
  delay(1000);

}

void loop() {
  


}
