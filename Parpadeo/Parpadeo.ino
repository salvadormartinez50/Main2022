/*
  Parpadeo
  Prende y apaga el Led Amarrillo de la tarjeta Arduino con un Periodo de 2 segundos y un tiempo de trabajo del 50%.

 La mayoria de los arduinos Arduinos tienen un LED en la tarjeta que se puede controlar. En la UNO, MEGA y ZERO 
  esta conectado en el pin 13, en la MKR1000 en el pin 6. LED_BUILTIN tiene en cuenta el pin en el que esta conectado el LED en la tarjeta utilizada.
 

  Modificado e 04 de Diciembre, 2016.
  por Salvador Martínez E.
  
 
*/


// La función corre al encender la tarjeta o presionar el boton de re-inicio.
void setup() {
  // Inicializa el pin digital LED_BUILTIN como una salida.
  pinMode(LED_BUILTIN, OUTPUT);
}

// La función loop es un lazo continuo, que se repite indefinidamente.
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // Enciende el LED (HIGH es el nivel de voltage)
  delay(1000);                       // Espera por un segundo
  digitalWrite(LED_BUILTIN, LOW);    // Apaga al LED haciendo voltage bajo
  delay(1000);                       // Espera por un segundo
}
