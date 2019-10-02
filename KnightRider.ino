#define DURATION 58
#define DELAY 2
// number of pins in a sequence
#define NO_PINS 8
// start of the pin sequence
#define PIN_START 5

// initialize current pin
int current_pin;

void setup() {
  // put your setup code here, to run once:
  current_pin = PIN_START;
}

void loop() {
  // count up
  for ( int i = 0; i < NO_PINS-1; i++){
    pulse(current_pin, DURATION);
    current_pin++;
    delay(DELAY);   
  }
  for (int i = 0; i < NO_PINS -1; i++){
    pulse(current_pin, DURATION);
    current_pin--;
    delay(DELAY);
  } 
}

void pulse(int pin, int duration){
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
  delay(duration);
  digitalWrite(pin, LOW);   
}
