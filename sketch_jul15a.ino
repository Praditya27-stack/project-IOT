
void setup() {
  pinMode (16, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (4, OUTPUT);
}

void loop() {
  digitalWrite (16, HIGH);
  delay (100);
  digitalWrite (5, HIGH);
  delay (100);
  digitalWrite (4, HIGH);
  delay (100);
  digitalWrite (16, LOW);
  delay (100);
  digitalWrite (5, LOW);
  delay (100);
  digitalWrite (4, LOW);
  delay (100);
}
