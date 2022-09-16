int estado= 0;

void setup() {
 Serial.begin(9600);
 pinMode(A2, INPUT);
 pinMode(A3, INPUT);
 
}

void loop() {
 estado = analogRead(A2);
 Serial.println(estado); 
}
