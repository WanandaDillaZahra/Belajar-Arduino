int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;
int LED5 = 9;
int LED6 = 8;


void setup() {
  // put your setup code here, to run once:
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
  pinMode (LED4, OUTPUT);
  pinMode (LED5, OUTPUT);
  pinMode (LED6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1, HIGH);
  delay(100);
  digitalWrite(LED1, LOW);
  delay(100);
  digitalWrite(LED6, HIGH);
  delay(100);
  digitalWrite(LED6, LOW);
  delay(100);
  digitalWrite(LED2, HIGH);
  delay(100);
  digitalWrite(LED2, LOW);
  delay(10);
  digitalWrite(LED5, HIGH);
  delay(100);
  digitalWrite(LED5, LOW);
  delay(100);
  digitalWrite(LED3, HIGH);
  delay(100);
  digitalWrite(LED3, LOW);
  delay(100);
  digitalWrite(LED4, HIGH);
  delay(100);
  digitalWrite(LED4, LOW);
  delay(100);
  digitalWrite(LED6, LOW);
  delay(50);
  digitalWrite(LED1, LOW);
  delay(50);
  digitalWrite(LED5, LOW);
  delay(50);
  digitalWrite(LED2, LOW);
  delay(50);
  digitalWrite(LED4, LOW);
  delay(50);
  digitalWrite(LED3, LOW);
  delay(50);

}
