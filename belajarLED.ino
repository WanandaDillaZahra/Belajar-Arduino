int pinLED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode (pinLED, OUTPUT); // Menyiapkan LED siap bekerja
  Serial.begin(9600);
  Serial.println("ON");
 }

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (pinLED, HIGH);
  Serial.println("ON");
  delay(100);
  digitalWrite (pinLED, LOW);
  Serial.println("OF");
  delay(100);
  digitalWrite (pinLED, HIGH);
  Serial.println("ON");
  delay(100);
  digitalWrite (pinLED, LOW);
  Serial.println("OF");
  delay(500);
  digitalWrite (pinLED, HIGH);
  Serial.println("ON");
  delay(500);
  digitalWrite (pinLED, LOW);
  Serial.println("OF");
  delay(500);
}
