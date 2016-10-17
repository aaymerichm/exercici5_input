void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, INPUT_PULLUP);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4,INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

  int A = digitalRead(13);
  int B = digitalRead(4);
  Serial.println(B);

  delay(100);



if(A==0 && B==1){
  
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(500);   // wait for a second

} else if (A==0 && B==0) {

  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  delay(500); // wait for a second

  
}

}
