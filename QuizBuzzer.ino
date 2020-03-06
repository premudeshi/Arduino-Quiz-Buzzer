int button1 = 9;
int led1 = 2;
int buttonState = 0;   
void setup() {
  // put your setup code here, to run once:
pinMode(led1, OUTPUT);
  pinMode(button1, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(button1);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(led1, HIGH);
  } else {
    // turn LED off:
    digitalWrite(led1, LOW);
  }
}
