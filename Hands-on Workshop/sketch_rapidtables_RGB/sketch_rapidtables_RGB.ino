#define RED 7
#define GREEN 8
#define BLUE 9

void setup(){ 
pinMode(RED,OUTPUT);
pinMode(GREEN,OUTPUT);
pinMode(BLUE,OUTPUT);
pinMode(4,INPUT);
}

void RGB(int redValue, int greenValue, int blueValue){
analogWrite(RED,redValue);
analogWrite(GREEN,greenValue);
analogWrite(BLUE,blueValue);
delay(1000);
}

void loop(){
RGB(255,0,0);
RGB(0,255,0);
RGB(0,0,255);
RGB(0,255,255);
RGB(255,0,255);
RGB(255,255,0);
RGB(255,255,255);
// ... check rapidtables.com/web/color/RGB_Color.html
}
