const int trig=2;
const int echo=3;
const int motor=5; 
 int t=0;
 int d=0;
 int reading;
void setup()
{
    pinMode(motor, OUTPUT);
    pinMode(echo, INPUT);
    pinMode(trig, OUTPUT);
}
void loop()
{
digitalWrite(trig,0);
delayMicroseconds(2);
digitalWrite(trig,1);
delayMicroseconds(10);
digitalWrite(trig,0);
t=pulseIn(echo,1);
d=(0.0343/2)*t ;
  if(d<200&&d>25){
 reading=map(d,25,200,255,0); 
  analogWrite(motor,reading);
  }  
  else{
  analogWrite(motor,0);
  }  
}