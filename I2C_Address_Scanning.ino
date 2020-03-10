#include<Wire.h>

void setup() {
  Wire.begin();
  Serial.begin(9600);
  for (byte address = 0; address < 128; address++) {
    Wire.beginTransmission(address);
    byte error = Wire.endTransmission();

    if (error == 0) {
      Serial.print("I2C address: 0x");
      if (address < 16)
        Serial.print("0");
      Serial.println(address, HEX);
      break;
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
