int pot=A0;
void setup() {
  pinMode(pot,INPUT);
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() {
  int vol=analogRead(pot);
  Serial.print("pot val");
  Serial.println(vol);
  // put your main code here, to run repeatedly:

}
