float sinalAnalog;
float sinalDigital;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sinalAnalog  =analogRead(A1);
  Serial.println(sinalAnalog);
}
