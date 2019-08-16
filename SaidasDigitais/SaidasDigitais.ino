/*
 * CURSO - Controle dispositivos remotamente com ESP8266
 * Por: Fábio Souza
 * 
 * Saidas Digitais
 * Acionamento de saídas digitais
 */

const byte LED = D1; //pino que do LED 

void setup() {
  pinMode(LED, OUTPUT);

}

void loop() {
  digitalWrite(LED,HIGH);  //liga o LED
  delay(100);            //espera 1 segundo
  digitalWrite(LED,LOW);  //apaga o LED
  delay(1000);            //espera 1 segundo
}
