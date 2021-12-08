
//Compatible con  Arduino IDE 1.0
//Version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x3f,20,4);  // Configura la direccion del LCD  0x3f, que fue la direccion encontrada por el escaner I2C, paraeste display de 20 caracteres y 4 lineas.

void setup()
{
  
    // Inicializa el puerto serial:
  Serial.begin(9600);
  lcd.init();      // Inicializa el lcd 
  lcd.init();
  // Imprime el mensaje.
  lcd.backlight();
  lcd.setCursor(2,0);
  lcd.print("Icce Electronica!");delay(1000);
  lcd.setCursor(2,1);
  lcd.print("Version 1.1 2018");delay(1000);
  lcd.setCursor(2,3);
  lcd.print("cchhava@gmail.com");delay(1000);
  // Activa el parpadeo del cursor:
  lcd.blink(); 
   pinMode(LED_BUILTIN, OUTPUT);

}


void loop() {

  digitalWrite(LED_BUILTIN, HIGH);  
  delay(100);                      
  digitalWrite(LED_BUILTIN, LOW);  
  delay(500);       
            
  
             }

