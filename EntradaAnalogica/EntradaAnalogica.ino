/*
 * CURSO - Controle dispositivos remotamente com ESP8266
 * Por: Fábio Souza
 * 
 * Entrada Analogica
 * Leitura de entradas analógica
 */

 void setup() {
  Serial.begin(9600);  //inicia a comunicação serial
}

void loop() {
  Serial.println(analogRead(A0));  //imprime o valor da conversão AD no pino A0
  delay(500);                      //aguarda 500 ms
}
