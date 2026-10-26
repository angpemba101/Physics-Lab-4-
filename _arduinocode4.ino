unsigned long currenttime=0;
unsigned long lasttime = 0; 
const unsigned long intervalbetweendata = 100;

void setup (){
  Serial.begin(500000);

}

void loop(){
  currenttime = micros();
  if (currenttime - lasttime >= intervalbetweendata){
    int sensorValue = analogRead(A2);
    lasttime+=intervalbetweendata; 
    Serial.print(currenttime/1000);
    Serial.print(',');
    Serial.println(sensorValue);
  }
}