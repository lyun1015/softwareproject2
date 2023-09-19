#define PIN_LED 7
unsigned int toggle;

void setup () {
  pinMode(PIN_LED,OUTPUT);
  Serial.begin(115200); // Initislize serial port  
  toggle = 0;
  digitalWrite(PIN_LED, toggle); // turn off LED.
}

void loop () {

  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, 0); // update LED ststus.
  delay(1000); // wait for 1,000 milliseconds
  for (int i = 0; i < 10; i++){
    toggle = toggle_state(toggle);
    digitalWrite(PIN_LED, toggle);
    delay(100);
  }
  while(1) {
  digitalWrite(PIN_LED, 1);
  }
}

int toggle_state(int toggle) {
  return !toggle;
}
