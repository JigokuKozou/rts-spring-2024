#include <TaskManagerIO.h>;

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

void blink(int pin, int &state) {
  	state = !state;
    digitalWrite(pin, state);
}

void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  taskManager.scheduleFixedRate(interval_3, [] {
    blink(3, ledState_3);
	}, TIME_MICROS);

  taskManager.scheduleFixedRate(interval_5, [] {
		blink(5, ledState_5);
	}, TIME_MICROS);

  taskManager.scheduleFixedRate(interval_6, [] {
		blink(6, ledState_6);
	}, TIME_MICROS);

  taskManager.scheduleFixedRate(interval_9, [] {
		blink(9, ledState_9);
	}, TIME_MICROS);

  taskManager.scheduleFixedRate(interval_10, [] {
		blink(10, ledState_10);
	}, TIME_MICROS);
}

void loop() {
  taskManager.runLoop();
}