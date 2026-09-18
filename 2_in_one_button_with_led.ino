int LED_1=8;
int LED_2=9;
int LED_3=10;
int BUTTON_1=2; 
int BUTTON_2=3; 
int BUTTON_3=4; 
void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(BUTTON_1, INPUT_PULLUP);
  pinMode(LED_2, OUTPUT);
  pinMode(BUTTON_2, INPUT_PULLUP);
  pinMode(LED_3, OUTPUT);
  pinMode(BUTTON_3, INPUT_PULLUP);
}
void loop() {
  if (digitalRead(BUTTON_1)== LOW){
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, HIGH);
  } else{
  digitalWrite(LED_3, LOW);
  }
  if (digitalRead(BUTTON_2)== LOW){
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, HIGH);
  } else{
  digitalWrite(LED_1, LOW);
  }
  if (digitalRead(BUTTON_3)== LOW){
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_3, HIGH);
  } else{
  digitalWrite(LED_2, LOW);
  }
}
