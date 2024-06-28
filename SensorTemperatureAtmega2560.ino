void setup() {
  Serial.begin(115200);
  Serial.setTimeout(3);
}

void loop() {
  double value = analogRead(A5);
  double voltage = value*3.3/1024;
  double temp = (13*voltage-39.6)/(0.118*voltage-0.38);
  Serial.println(temp);

}
