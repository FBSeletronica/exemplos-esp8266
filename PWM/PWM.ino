/*
 * CURSO - Controle dispositivos remotamente com ESP8266
 * Por: Fábio Souza
 * 
 * PWM
 * Saida PWM
 */

const byte LED = D1; //pino que do LED 


void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  analogWrite(LED,analogRead(A0)); 
}
