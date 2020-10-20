//Created By INNAN NOUHAILA

const int sensor=A5; // Assigning analog pin A5 to variable 'sensor'

float tempC; //variable to store temperature in degree Clesius 

float tempF; //variable to store temperature in Fahreinheit 

float Vout; //temporary variable to hold sensor reading 

void setup() {

  pinMode(sensor,INPUT); //Configuring sensor pin as input 

  Serial.begin(9600);

}

void loop() {

Vout=analogRead(sensor); //Reading the value from sensor 

Vout=Vout*(5.0*4.88)/100.0;

tempC=Vout; //Storing value in Degree Celsius 

tempF=(Vout*1.8)+32; //Converting to Fahreinheit 

Serial.print("Temperature in degree C= ");
Serial.print(tempC);
Serial.print("Temperature in Fahreinheit ");
Serial.print(tempF);

Serial.println();

delay(500); // Delay of 1 second for ease of viewing 
}
