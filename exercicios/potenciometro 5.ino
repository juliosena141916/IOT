void setup() {
pinMode(9, OUTPUT);
}

void loop() {
int potvalue = analogRead(A0);
int ledvalue = map(potvalue,0, 1023, 0, 255);
analogWrite(9, ledvalue);
}