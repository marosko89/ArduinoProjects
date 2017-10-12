// http://www.instructables.com/id/LDR-Sensor-Module-Users-Manual-V10/

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  unsigned int AnalogValue;
  AnalogValue = analogRead(0);
  Serial.println(AnalogValue);  
}
