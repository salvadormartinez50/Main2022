/*
  Zaguán
  Para abrir la puerta:
                        Activa un Solenoide, instalado sobre la chapa de la puerta; "chica", del Zaguán, el cual abre la puerta.
                        Mediante el comando "a", enviado a travez de Bluetooth por android.
 
  Para abrir el Zaguán:
                        Activa dos motores; El motor 1 abre el cerrojo, y el motor 2 la hoja del Zaguán.
  Modificado e 04 de Diciembre, 2016.
  por Salvador Martínez E.
  
 
*/

int estadouno = 0;         // Variable para la lectura del estado del interruptor uno
const int interruptoruno = 2;     // El numero de pin del interruptor uno


// La función corre al encender la tarjeta o presionar el boton de re-inicio.
void setup() {

  
 
  // Inicializa el pin digital LED_BUILTIN como una salida.
  pinMode(LED_BUILTIN, OUTPUT);

  // Inicializa el pin del interuptor uno como entrada:
  pinMode(interruptoruno, INPUT);


  // Inicializa el pin digital 9 como una salida.
  pinMode(9, OUTPUT);

  // Inicializa el pin digital 10 como una salida.
  pinMode(10, OUTPUT);

  // Inicializa el puerto serial uno; Ya que al cero, la tarjeta Mega, lo utiliza para comunicarse con la PC.
  Serial1.begin(9600);
}

// La función loop es un lazo continuo, que se repite indefinidamente.
void loop() {
  char dato = Serial1.read();
  if(dato=='a')  {
    digitalWrite(9,HIGH);
  
   delay(800);  
   digitalWrite(9,LOW);
   }

    if(dato=='b')  {
      digitalWrite(10, HIGH);
  // Lee el estado del interruptor uno:
  estadouno = digitalRead(interruptoruno);

  // Revisa si esta activado el interruptor uno; el cual se activa cuando el cerrojo esta a su máxima abertura.
  // Y si es así; estadouno estará en HIGH:
  if (estadouno == HIGH) {
    // Se detiene el Motor del cerrojo:
    digitalWrite(10, LOW);
  } 
  
   }

  digitalWrite(LED_BUILTIN, HIGH);   // Enciende el LED (HIGH es el nivel de voltage)
  delay(5);                       // Espera por un segundo
  digitalWrite(LED_BUILTIN, LOW);    // Apaga al LED haciendo voltage bajo

}
