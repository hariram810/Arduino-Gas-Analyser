int x = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {

  x = x + 1;
  Serial.println(x);
  delay(1000);

}
