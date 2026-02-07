/*
  Read Temperature and Humidity
  DHT11 Library
  Author: Bonezegei (Jofel Batutay)
  Date : November 2023

  Tested using ESP32-WROOM32
*/

#include <Bonezegei_DHT11.h>  

//param = DHT11 signal pin
Bonezegei_DHT11 dht(7);   //Data pin on the DHT11 sensor connects to pin 7 on the arduino 
String out;     //a string variable is declared

void setup() {            //contains initialisation of the components
  Serial.begin(9600);   //starts serial communication, 9600 is the bits per second of data transmission
  dht.begin();     // Initialize the DHT11 sensor
}

void loop() {                            //code repeats again and again

  if (dht.getData()) {                         // get All data from DHT11
    float tempDeg = dht.getTemperature();      //declare variable 'tempDeg' and returns temperature in celsius, stores value in this variable 
    
    float tempFar = (tempDeg * 9.0 / 5.0) + 32.0;  // declare variable 'tempFar' which uses an equation to calculate temp in Farenheit using
                                                     //the cesius value obtained from the DHT11
    int hum = dht.getHumidity();               // declares variable 'hum', returns humidity value and stoes it in the variable 'hum'
    
    out = (String) tempDeg + "," + tempFar + "," + hum;   //output format, where the three values are seperated by a comma and output in
                                                          //a single line next to each other
    Serial.println(out);   //sends the output string to serial monitor so that it can be displayed on the laptop on Arduino IDE
  }


  delay(2000);  //delay atleast 2 seconds for DHT11 to read tha data
}






