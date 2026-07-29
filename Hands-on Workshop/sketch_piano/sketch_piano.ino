void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
do4(500);
re4(500);
me4(500);
fa4(500);
sol4(500);
la4(500);
ce4(500);
do5(500);
delay(2000);

do5(500);
ce4(500);
la4(500);
sol4(500);
fa4(500);
me4(500);
re4(500);
do4(500);
}

void do4(int time){
  tone(10,261,time);
  delay(time+50);// the +50ms will create a slight stop between the tones
}

void re4(int time){
  tone(10,293,time);
  delay(time+50);
}

void me4(int time){
  tone(10,329,time);
  delay(time+50);
}

void fa4(int time){
  tone(10,349,time);
  delay(time+50);
}

void sol4(int time){
  tone(10,392,time);
  delay(time+50);
}

void la4(int time){
  tone(10,440,time);
  delay(time+50);
}

void ce4(int time){
  tone(10,493,time);
  delay(time+50);
}

void do5(int time){
  tone(10,523,time);
  delay(time+50);
}