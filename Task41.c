#include <SoftwareSerial.h>
const int PotIn_Pin = 1; //Analogpin vom Potiabgriff
int PotIn = 0;
int time = 9600;
int delayTime = 100;
void setup() {
  Serial.begin(time);
}

void loop() {
  PotIn = analogRead(PotIn_Pin);
  Serial.print("PotSpannung in Step von 0 bis 1023:");  
  Serial.println(PotIn);
  delay(delayTime);
}
