//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// The Unnamed Circuit
// 
// Made by icceelectronica icceelectronica
// License: CC-BY-SA 3.0
// Downloaded from: https://123d.circuits.io/circuits/1805236-the-unnamed-circuit

// Al Pin 13 en las tarjetas Arduino normalmente se le conecta un Led.// por lo que declaramos la variable entera "led"int led = 13;// La rutina setup se activa una vez que se presiona el reset:void setup() {  // inicializamos el pin digital como un pin de salida.  pinMode(led, OUTPUT);}// la rutina de lazo se activa indefinidamente:void loop() {  digitalWrite(led, HIGH);   // Enciende al LED   delay(500);               // Espera por 500 milisegundos  digitalWrite(led, LOW);    // Apaga al LED  delay(500);               // Espera por 500 milisegundos}
