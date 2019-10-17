void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
  pinMode(4,OUTPUT);
  pinMode(5,INPUT);
  pinMode(9,OUTPUT);
  pinMode(13,INPUT);
  pinMode(12,INPUT);
  pinMode(10,OUTPUT);
}

void loop() {
 int a=digitalRead(9);
 if(a==1)
 {
  digitalWrite(2,1);
 digitalWrite(3,0);
 digitalWrite(4,1);
 digitalWrite(5,0);
 delay(500);
 }
 else if(a==0){
 digitalWrite(2,0);
 digitalWrite(3,1);
 digitalWrite(4,0);
 digitalWrite(5,1);
 digitalWrite(11,1);
 delay(500); }
 /*else if(a==1&&b==1){
 digitalWrite(3,0);
 digitalWrite(4,1);
 digitalWrite(6,0);
 digitalWrite(5,1);
 delay(500);}
 else  if(a==1&&b==0){
 digitalWrite(3,0);
 digitalWrite(4,0);
 digitalWrite(6,1);
 digitalWrite(5,0);
 delay(10);}
 else  if(a==0&&b==1){
 digitalWrite(3,1);
 digitalWrite(4,0);
 digitalWrite(6,0);
 digitalWrite(5,0);
 delay(10);}*/
}
