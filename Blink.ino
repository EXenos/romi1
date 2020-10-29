///*  #include <QTRSensors.h>
//  Blink
//
//  Turns an LED on for one second, then off for one second, repeatedly.
//
//  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
//  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
//  the correct LED pin independent of which board is used.
//  If you want to know what pin the on-board LED is connected to on your Arduino
//  model, check the Technical Specs of your board at:
//  https://www.arduino.cc/en/Main/Products
//
//  modified 8 May 2014
//  by Scott Fitzgerald
//  modified 2 Sep 2016
//  by Arturo Guadalupi
//  modified 8 Sep 2016
//  by Colby Newman
//
//  This example code is in the public domain.
//
//  http://www.arduino.cc/en/Tutorial/Blink
//*//
//#define BAUD_RATE 9600
//
//int a;
//int flashes;
//
//// the setup function runs once when you press reset or power the board
//void setup() {
//  // initialize digital pin LED_BUILTIN as an output.
//  pinMode(LED_BUILTIN, OUTPUT);
//  pinMode(6,OUTPUT);
//
//  // initialize digital pin LED_BUILTIN as an output.
//  pinMode(LED_BUILTIN, OUTPUT);
//
//  //Start a serial connection
//  Serial.begin(BAUD_RATE);
//
//  // Wait for stable connection, report reset.
//  delay(1000);
//  Serial.println("***RESET***");
//}
//
//// the loop function runs over and over again forever
//void loop() {
//  flash_leds(1000);    // wait for a second
//  
//  //Serial.println("Hello, from the Romi");
//
//  Serial.print("Number of flashes: ");
//  Serial.println(flashes);
//  
//  a = add_two_numbers(1, 2);    //prosthiki arithmwn
//  Serial.println(a);          //printf 
//
// // play_tone(1);   //entasi buzzer
//}
//
//void flash_leds (int delay_ms) {
//
//  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(delay_ms);                       // wait for a second
//  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
//  delay(delay_ms); 
//  flashes +=1;
//}
//
//int add_two_numbers(int number1, int number2) {
//    return number1+number2;
//}
//
//void play_tone(int volume) {
//    analogWrite(6,volume);
//    delay(1000);
//    analogWrite(6,0);
//}
//
