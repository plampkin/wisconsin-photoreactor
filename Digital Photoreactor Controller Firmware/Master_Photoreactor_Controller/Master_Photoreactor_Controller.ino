////////////////////////////////////////////////////////////////////////////////////
//       Digital Photoreactor Controller Slave Program Controlled by I2C          //
//          Run this slave program on the Arduino Uno or Rasberry Pi.             //      
////////////////////////////////////////////////////////////////////////////////////

#include <Wire.h>

#define I2C_SLAVE_ADDR  0x26            // I2C slave address (38, 0x26)

void setup()
{
  // init the Wire object
  Wire.begin(); 
  
  // wait for slave to finish any init sequence
  delay(2000);
}

void loop()
{

  //generate buffer containing data to send via I2C
  uint8_t buf[1];
  buf[0] = 25;  // adjusting this byte changes fan speed. Can be adjusted from 0 to 256.
  buf[1] = 1;  // adjusting this byte changes LED intensity. Can be adjusted from 0 to 256. 

  // send buffer 
  Wire.beginTransmission(I2C_SLAVE_ADDR);
  Wire.write( buf, 2);
  Wire.endTransmission();
  
  // delay 20 milliseconds to accomodate slave onReceive()
  delay(20);

  /////////////////////// WHY DO I NEED THIS PART?//////////////////////////
  Wire.requestFrom(I2C_SLAVE_ADDR, 1);
  
  // delay 1 second so user can watch results
  delay(1000);
}
