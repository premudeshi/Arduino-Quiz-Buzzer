/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Button
*/
int resetPin = 7;
// constants won't change. They're used here to set pin numbers:
const int button1 = 10;     // the number of the pushbutton pin
const int led1 =  5;      // the number of the LED pin

const int button2 = 11;     // the number of the pushbutton pin
const int led2 =  4;   

const int button3 = 12;     // the number of the pushbutton pin
const int led3 =  3;   

const int button4 = 13;     // the number of the pushbutton pin
const int led4 =  2;   

// variables will change:
int button1State = 0;
int button2State = 0;
int button3State = 0;
int button4State = 0;

void setup() {
  Serial.begin(9600);
  digitalWrite(resetPin, HIGH);
  // initialize the LED pin as an output:
  pinMode(led1, OUTPUT);
  pinMode(button1, INPUT);

  pinMode(led2, OUTPUT);
  pinMode(button2, INPUT);

  pinMode(led3, OUTPUT);
  pinMode(button3, INPUT);

  pinMode(led4, OUTPUT);
  pinMode(button4, INPUT);
}

void loop() {
  
  while(Serial.available() == 0)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
  }
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  
  // read the state of the pushbutton value:
  button1State = digitalRead(button1);
  button2State = digitalRead(button2);
  button3State = digitalRead(button3);
  button4State = digitalRead(button4);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (button1State == LOW) {
    // turn LED on:
    Serial.println("Player 1 Wins Round");
    digitalWrite(led1, HIGH);
    delay(750);
    digitalWrite(led1, LOW);
    delay(750);
    digitalWrite(led1, HIGH);
    delay(750);
    digitalWrite(led1, LOW);
    digitalWrite(led1, HIGH);
    delay(10000);
    digitalWrite(led1, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(resetPin, LOW);
  }

  if (button2State == LOW) {
    // turn LED on:
    Serial.println("Player 2 Wins Round");
    digitalWrite(led2, HIGH);
    delay(750);
    digitalWrite(led2, LOW);
    delay(750);
    digitalWrite(led2, HIGH);
    delay(750);
    digitalWrite(led2, LOW);
    digitalWrite(led2, HIGH);
    delay(10000);
    digitalWrite(led2, LOW);
  }

  if (button3State == LOW) {
    // turn LED on:
    Serial.println("Player 3 Wins Round");
    digitalWrite(led3, HIGH);
    delay(750);
    digitalWrite(led3, LOW);
    delay(750);
    digitalWrite(led3, HIGH);
    delay(750);
    digitalWrite(led3, LOW);
    digitalWrite(led3, HIGH);
    delay(10000);
    digitalWrite(led3, LOW);
  }

  if (button4State == LOW) {
    // turn LED on:
    Serial.println("Player 4 Wins Round");
    digitalWrite(led4, HIGH);
    delay(750);
    digitalWrite(led4, LOW);
    delay(750);
    digitalWrite(led4, HIGH);
    delay(750);
    digitalWrite(led4, LOW);
    digitalWrite(led4, HIGH);
    delay(10000);
    digitalWrite(led4, LOW);
  }
    //call reset
}
