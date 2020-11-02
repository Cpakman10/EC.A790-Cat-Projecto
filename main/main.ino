bool on, pressed;


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2, INPUT);
  on = false;
  pressed = false;
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  int button1 = digitalRead(2);
  if (button1 == LOW) {
    pressed = true;
  }
  if(pressed == true && button1 == HIGH) {
    pressed = false;
    on = !on;
  }
  if (on == true) {
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else {
    digitalWrite(LED_BUILTIN, LOW);
  }
}
