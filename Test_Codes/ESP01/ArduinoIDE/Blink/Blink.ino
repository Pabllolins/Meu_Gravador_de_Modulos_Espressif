
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println("OLA EU SOU ESP01");
  Serial.println("FUI GRAVADO E ESTOU COMUNICANDO!!");
  Serial.println();
  Serial.println();
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED ON");
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED OFF");
  delay(1000);
}
