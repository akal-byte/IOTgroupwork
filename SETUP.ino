void SETUP(){
  
   pinMode(led, OUTPUT);
   myservo.attach(11);
   pinMode(trigpin,OUTPUT);
   pinMode(echopin,INPUT);
   Serial.begin(9600);

  
}
