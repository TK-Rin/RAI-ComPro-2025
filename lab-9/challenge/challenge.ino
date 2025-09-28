const int RED_LED_PIN = 13;
const int YELLOW_LED_PIN = 12;
const int GREEN_LED_PIN = 11;
const int BUTTON_PIN = 2;

const long GREEN_TIME = 8000;
const long YELLOW_TIME = 2000;
const long RED_TIME = 10000;

enum LightState {
  STATE_GREEN,
  STATE_YELLOW,
  STATE_RED
};

LightState currentState = STATE_RED;
unsigned long stateStartTime = 0;
bool buttonPressed = false;

void setLights(bool r, bool y, bool g) {
  digitalWrite(RED_LED_PIN, r ? HIGH : LOW);
  digitalWrite(YELLOW_LED_PIN, y ? HIGH : LOW);
  digitalWrite(GREEN_LED_PIN, g ? HIGH : LOW);
}

void setup() {
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(YELLOW_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  
  stateStartTime = millis();
}

void loop() {
  unsigned long currentTime = millis();
  unsigned long elapsedTime = currentTime - stateStartTime;
  
  if (digitalRead(BUTTON_PIN) == LOW) {
    buttonPressed = true;
  }

  switch (currentState) {
    case STATE_GREEN:
      setLights(LOW, LOW, HIGH);
      if (buttonPressed || elapsedTime >= GREEN_TIME) {
        currentState = STATE_YELLOW;
        stateStartTime = currentTime;
        buttonPressed = false;
      }
      break;

    case STATE_YELLOW:
      setLights(LOW, HIGH, LOW);
      if (elapsedTime >= YELLOW_TIME) {
        currentState = STATE_RED;
        stateStartTime = currentTime;
      }
      break;

    case STATE_RED:
      setLights(HIGH, LOW, LOW);
      if (elapsedTime >= RED_TIME) {
        currentState = STATE_GREEN;
        stateStartTime = currentTime;
      }
      break;
  }
}