const int LED_MERAH  = 18;
const int LED_KUNING = 19;
const int LED_HIJAU  = 21;

void setup() {
  pinMode(LED_MERAH, OUTPUT);
  pinMode(LED_KUNING, OUTPUT);
  pinMode(LED_HIJAU, OUTPUT);
}

void loop() {
  digitalWrite(LED_MERAH, HIGH);
  digitalWrite(LED_KUNING, LOW);
  digitalWrite(LED_HIJAU, LOW);
  delay(5000);

  digitalWrite(LED_MERAH, LOW);
  digitalWrite(LED_KUNING, HIGH);
  digitalWrite(LED_HIJAU, LOW);
  delay(2000);

  digitalWrite(LED_MERAH, LOW);
  digitalWrite(LED_KUNING, LOW);
  digitalWrite(LED_HIJAU, HIGH);
  delay(5000);
}