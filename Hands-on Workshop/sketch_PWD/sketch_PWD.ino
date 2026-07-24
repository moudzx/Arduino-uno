int led=9;
int button=7;
int count=0; //variable to count the number of times pushing the button 
int power=0; //variable to indicate the value of the duty cycle
int ButtonState; 

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(button,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
ButtonState=digitalRead(button);
if(ButtonState==HIGH){
  power=power+64;
  count++; //updation of the count variable value after each push 
  analogWrite(led,power);
  delay(1000);
}
if(count==5){
  count=0;
  power=0;
  analogWrite(led,0);
  }
}
