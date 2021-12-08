//Compatible con  Arduino IDE 1.0
//Version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3f,20,4);  // Configura la direccion del LCD  0x3f, que fue la direccion encontrada por el escaner I2C, paraeste display de 20 caracteres y 4 lineas.

uint8_t bell[8]  = {0x4,0xe,0xe,0xe,0x1f,0x0,0x4};
uint8_t note[8]  = {0x2,0x3,0x2,0xe,0x1e,0xc,0x0};
uint8_t clock[8] = {0x0,0xe,0x15,0x17,0x11,0xe,0x0};
uint8_t heart[8] = {0x0,0xa,0x1f,0x1f,0xe,0x4,0x0};
uint8_t duck[8]  = {0x0,0xc,0x1d,0xf,0xf,0x6,0x0};
uint8_t check[8] = {0x0,0x1,0x3,0x16,0x1c,0x8,0x0};
uint8_t cross[8] = {0x0,0x1b,0xe,0x4,0xe,0x1b,0x0};
uint8_t retarrow[8] = {  0x1,0x1,0x5,0x9,0x1f,0x8,0x4};
void setup () {

   // Inicializa el puerto serial:
  Serial.begin(9600);
  lcd.init();      // Inicializa el lcd 
  lcd.init();
  // Imprime el mensaje.
  lcd.backlight();
  lcd.setCursor(2,0);
  lcd.print("Icce Electronica!");
  lcd.setCursor(2,1);
  lcd.print("Version 1.1 2018");
  lcd.setCursor(2,3);
  lcd.print("cchhava@gmail.com");
 
  
   lcd.clear();
  // lcd.backlight();
  //   lcd.setBacklightPin(3);
   //  lcd.setBacklight(1);
 
   lcd.createChar(0, bell);
   lcd.createChar(1, note);
   lcd.createChar(2, clock);
   lcd.createChar(3, heart);
   lcd.createChar(4, duck);
   lcd.createChar(5, check);
   lcd.createChar(6, cross);
   lcd.createChar(7, retarrow);
  }

// display all keycodes
void displayKeyCodes(void) {
  uint8_t i = 0;
  while (1) {
    lcd.clear();
    lcd.print("Codigos 0x"); lcd.print(i, HEX);
    lcd.print("-0x"); lcd.print(i+16, HEX);
    lcd.setCursor(0, 1);
    for (int j=0; j<16; j++) {
      lcd.write(i+j);
    }
    i+=16;
    
    delay(5000);
  }}    
    

void loop () {
  displayKeyCodes();
}
