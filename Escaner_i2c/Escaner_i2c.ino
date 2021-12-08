// Written by Nick Gammon
// Date: 20th April 2011
 
#include <Wire.h>
 
void setup() {
  Serial.begin (9600);
 
  // Leonardo: wait for serial port to connect
  while (!Serial) 
    {
    }
 
  Serial.println ();
  Serial.println ("Escaner I2C.   Escaneando...");
  byte count = 0;
  
  Wire.begin();
  for (byte i = 8; i < 120; i++)
  {
    Wire.beginTransmission (i);
    if (Wire.endTransmission () == 0)
      {
      Serial.print ("Direccion encontrada: ");
      Serial.print (i, DEC);
      Serial.print (" (0x");
      Serial.print (i, HEX);
      Serial.println (")");
      count++;
      delay (1);  // maybe unneeded?
      } // end of good response
  } // end of for loop
  Serial.println ("Hecho.");
  Serial.print ("Se encontró:  ");
  Serial.print (count, DEC);
  Serial.println (" dispositivo(s).");
}  // end of setup
 
void loop() {}
