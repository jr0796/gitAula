


// Sensores infravermelho
float sesquerdo = 8;


// estado do sensores
float stdoesq = 0 ;


void  setup () {

 Serial.begin( 9600 );


}

void  loop () {

  
  stdoesq = digitalRead (sesquerdo);
  
  Serial.println ( " Sensor Esquerdo: " );
  Serial.println (stdoesq);
  delay(300);
  
}
