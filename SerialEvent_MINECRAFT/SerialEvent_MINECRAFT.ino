#include <Gamer.h>

/*
  Serial Event example
 
 When new serial data arrives, this sketch adds it to a String.
 When a newline is received, the loop prints the string and 
 clears it.
 
 A good test for this is to try it with a GPS receiver 
 that sends out NMEA 0183 sentences. 
 
 Created 9 May 2011
 by Tom Igoe
 
 This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/SerialEvent
 
 */
 Gamer gamer;
 
 byte up[8] = {
  B00011000,
  B00111100,
  B01111110,
  B11111111,
  B00011000,
  B00011000,
  B00011000,
  B00011000};

byte right[8] = {
  B00001000,
  B00001100,
  B00001110,
  B11111111,
  B11111111,
  B00001110,
  B00001100,
  B00001000};

byte down[8] = {
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B11111111,
  B01111110,
  B00111100,
  B00011000};

byte left[8] = {
  B00010000,
  B00110000,
  B01110000,
  B11111111,
  B11111111,
  B01110000,
  B00110000,
  B00010000};
 
boolean flag  = false;
boolean flag1 = false;
boolean flag2 = false;
boolean flag3 = false;
boolean flag4 = false;
String inputString = "";         // a string to hold incoming data
boolean stringComplete = false;  // whether the string is complete
boolean on = false;
void setup() {
  gamer.begin();
  pinMode(13,OUTPUT);
  pinMode(A0,INPUT_PULLUP);
    pinMode(A1,INPUT_PULLUP);
      pinMode(A2,INPUT_PULLUP);
        pinMode(A3,INPUT_PULLUP);
           pinMode(A4,INPUT_PULLUP);  
  // initialize serial:
  Serial.begin(9600);
  // reserve 200 bytes for the inputString:
  inputString.reserve(200);
}

void loop() {

  while (Serial.available() > 0) {
    // get the new byte:
    char inChar = (char)Serial.read(); 
    if(inChar == '5'){
digitalWrite(13,HIGH);
 gamer.printString("Gamer and Minecraft");
digitalWrite(13,LOW);
  }
    if(inChar == '4'){
digitalWrite(13,HIGH);
for(int i = 0; i < 8; i++){
 gamer.playTone((15*i)+15);
  delay(40);
  gamer.stopTone();
digitalWrite(13,LOW);
  delay(40);
}
  }

}
////
if(digitalRead(A1) == LOW && flag == false){
 Serial.print('a'); 
  gamer.printImage(left);
 delay(100);
 flag = true;

}
if(digitalRead(A1) == HIGH && flag == true){
 flag = false;
 Serial.print('z');
}

////
if(digitalRead(A0) == LOW && flag1 == false){
 Serial.print('w'); 
  gamer.printImage(up);
 delay(100);
 flag1 = true;
}
if(digitalRead(A0) == HIGH && flag1 == true){
 flag1 = false;
 Serial.print('x');
}

/////
if(digitalRead(A2) == LOW && flag2 == false){
 Serial.print('d');
 gamer.printImage(right); 
 delay(100);
 flag2 = true;
}
if(digitalRead(A2) == HIGH && flag2 == true){
 flag2 = false;
 Serial.print('c');
}

/////
if(digitalRead(A3) == LOW && flag3 == false){
 Serial.print('s'); 
  gamer.printImage(down);
 delay(100);
 flag3 = true;
}
if(digitalRead(A3) == HIGH && flag3 == true){
 flag3 = false;
 Serial.print('v');
 
}
//////
if(digitalRead(A4) == LOW && flag4 == false){
 Serial.print('1'); 
 delay(100);
 flag4 = true;
}
if(digitalRead(A4) == HIGH && flag4 == true){
 flag4 = false;
 Serial.print('2');
 
}


}
/*
  SerialEvent occurs whenever a new data comes in the
 hardware serial RX.  This routine is run between each
 time loop() runs, so using delay inside loop can delay
 response.  Multiple bytes of data may be available.
 */


