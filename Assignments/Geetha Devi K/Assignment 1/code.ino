int var1=2;
int var2=3;
void setup()
{
  Serial.begin(9600);
  pinMode(var1,OUTPUT);
  pinMode(var2,INPUT);
  pinMode(12,OUTPUT);
}
void loop()
{
  //ultrasonic sensor
  digitalWrite(var1,LOW);
  digitalWrite(var1,HIGH);
  delayMicroseconds(10);
  digitalWrite(var1,LOW);
  float dur=pulseIn(var2,HIGH);
  float dis=(dur*0.0343)/2;
  Serial.print("Distance is: ");
  Serial.println(dis);

    //LED ON
  if(dis>=100)
  {
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
  }

  //Buzzer For ultrasonic Sensor
  if(dis>=100)
  {
  for(int i=0; i<=30000; i=i+10)
  {
  tone(12,i);
  delay(1000);
  noTone(12);
  delay(1000);
  }
  }




    //Temperate Sensor
  double a= analogRead(A0);
  double var1=(((a/1024)*5)-0.5)*100;
  Serial.print("Temp Value: ");
  Serial.println(var1);
  delay(1000);


  //LED ON
  if(var1>=100)
  {
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
  }

  //Buzzer for Temperature Sensor
  if(var1>=100)
  {
  for(int i=0; i<=30000; i=i+10)
  {
  tone(12,i);
  delay(1000);
  noTone(12);
  delay(1000);
  }
  }

   //LED OFF
  if(var1<100)
  {
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
  }
}
