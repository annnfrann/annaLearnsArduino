
int red = 13;
int yellow = 12;
int green = 11;


void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  delay(10);

  digitalWrite(yellow, HIGH);
  delay(500);
  digitalWrite(yellow, LOW);
  delay(10);

  digitalWrite(green, HIGH);
  delay(500);
  digitalWrite(green, LOW);
  delay(10);
}
