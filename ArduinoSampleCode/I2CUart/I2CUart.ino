#include <Wire.h>

#include <string.h>
#include <SPI.h>
#include "SC16IS750.h"


SC16IS750 i2cuart = SC16IS750(SC16IS750_PROTOCOL_I2C,SC16IS750_ADDRESS_BB);

//Connect TX and RX with a wire and run this sketch

void setup() 
{
    Serial.begin(9600);

    // UART to Serial Bridge Initialization
    i2cuart.begin(9600);               //baudrate setting
    Serial.println("Init OK");
    if (i2cuart.ping()!=1) {
        Serial.println("device not found");
        while(1);
    } else {
        Serial.println("device found");
    }
    Serial.println("start serial communication");
    


};

void loop() 
{
   
    i2cuart.write(0x55);
    while(i2cuart.available()==0);
    if (i2cuart.read()!=0x55) {
        Serial.println("serial communication error 1");
        while(1);
    }
    else{
      Serial.println("serial communication OK 1");
    }   
    delay(500);
    
    i2cuart.write(0x0A);
    while(i2cuart.available()==0);
    if (i2cuart.read()!=0x0A) {
        Serial.println("serial communication error 2");
        while(1);
    }
    else{
      Serial.println("serial communication OK 2");
    }   
    
    delay(500);
      
     
  
  

  
};
