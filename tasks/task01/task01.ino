bool ledState_3 = LOW;
bool ledState_5 = LOW;
bool ledState_6 = LOW;
bool ledState_9 = LOW;
bool ledState_10 = LOW;

const long interval_3 = 10000;  // interval at which to blink (microseconds) 10 ms
const long interval_5 = 1000;  // 1 ms
const long interval_6 = 500;
const long interval_9 = 100;
const long interval_10 = 50;

unsigned long previousMicros_3 = 0;
unsigned long previousMicros_5 = 0;
unsigned long previousMicros_6 = 0;
unsigned long previousMicros_9 = 0;
unsigned long previousMicros_10 = 0;

unsigned long currentMicros = 0;


void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  currentMicros = micros();

  if (currentMicros - previousMicros_3 >= interval_3) {
    previousMicros_3 = currentMicros;

    ledState_3 = !ledState_3;

    digitalWrite(3, ledState_3);
  }

  if (currentMicros - previousMicros_5 >= interval_5) {
    previousMicros_5 = currentMicros;

    ledState_5 = !ledState_5;

    digitalWrite(5, ledState_5);
  }

  if (currentMicros - previousMicros_6 >= interval_6) {
    previousMicros_6 = currentMicros;

    ledState_6 = !ledState_6;

    digitalWrite(6, ledState_6);
  }

  if (currentMicros - previousMicros_9 >= interval_9) {
    previousMicros_9 = currentMicros;

    ledState_9 = !ledState_9;

    digitalWrite(9, ledState_9);
  }

  if (currentMicros - previousMicros_10 >= interval_10) {
    previousMicros_10 = currentMicros;

    ledState_10 = !ledState_10;

    digitalWrite(10, ledState_10);
  }
}
