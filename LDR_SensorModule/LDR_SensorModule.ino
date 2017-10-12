// http://www.instructables.com/id/LDR-Sensor-Module-Users-Manual-V10/

int analogPin = 0;        // LDR (Light Dependent Resistor) connected to analog pin A0

unsigned int AnalogValue; // variable to store the value read, range <0, 1023>

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  AnalogValue = analogRead(analogPin);
  
  Serial.println(AnalogValue);  
}
