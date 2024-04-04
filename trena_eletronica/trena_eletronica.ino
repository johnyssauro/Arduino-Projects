#define pinTrg 3
#define pinEch 4

// Distance traveled by sound in 1 microsecond
const float soundMUPS = 0.000340;

float distanceObj(float timeMicroseconds) {

  return (soundMUPS*timeMicroseconds)/2;

}

void setup() {
  
  pinMode(pinTrg, OUTPUT);
  pinMode(pinEch, INPUT);
  Serial.begin(9600);
  delay(1000);

}

void loop() {

  // Shooting an ultrassonic pulse
  digitalWrite(pinTrg, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrg, LOW);

  // Time between Trigger shooting and Echo recepting the pulse

  float time = pulseIn(pinEch, HIGH);

  float distance = distanceObj(time);

  Serial.println(distance);
  delay(1000);

}
