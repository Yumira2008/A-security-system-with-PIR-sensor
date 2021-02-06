void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int pir = digitalRead(2);

  if(pir == 1){
    digitalWrite(3,HIGH)
  }
  else {
    digitalWrite(3,LOW);
  }

}
