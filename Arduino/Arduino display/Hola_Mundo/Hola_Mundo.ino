
//Compatible con  Arduino IDE 1.0
//Version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3f,20,4);  // Configura la direccion del LCD  0x3f, que fue la direccion encontrada por el escaner I2C, paraeste display de 20 caracteres y 4 lineas.

void setup()
{
  lcd.init();                      // Inicializa el lcd 
  lcd.init();
  // Imprime el mensaje.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Icce Electronica!");
  //lcd.setCursor(2,1);
 // lcd.print("Programa creado por!");
 //  lcd.setCursor(0,2);
 // lcd.print("Salvador Martínez E.");
  // lcd.setCursor(2,3);
 // lcd.print("   Primera version 2018!");
}


void loop()
{
}
