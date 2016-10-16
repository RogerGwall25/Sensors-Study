void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  digitalWrite(3, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3, HIGH);
  delayMicroseconds(20);
  digitalWrite(3, LOW);
  unsigned long t1 = micros();
  while(digitalRead(2) == LOW){};
  while(digitalRead(2) == HIGH){};
  unsigned long t2 = micros();
  Serial.print("distance=");
  Serial.print(((t2-t1)*0.034)/2);
  Serial.println("cm");
  delay(500);
}
