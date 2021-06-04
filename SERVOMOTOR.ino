void SERVOMOTOR(){
  myservo.write(0);
  if (distance<=30){
    myservo.write(90);
  }
  delay(3000);
}
