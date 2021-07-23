const int ldrpin0=A0;
const int ldrpin1=A1;
const int ldrpin2=A2;
const int ldrpin3=A3;
const int ldrpin4=A4;
const int ldrpin5=A5;



const int laserpin=4;
const int laserdelay=10;
const int motordelay=20;
const int comp=100;




void setup() 
{
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(laserpin,OUTPUT);
 pinMode(ldrpin0,INPUT);
 pinMode(ldrpin1,INPUT);
 pinMode(ldrpin2,INPUT);
 pinMode(ldrpin3,INPUT);
 pinMode(ldrpin4,INPUT);
 pinMode(ldrpin5,INPUT);

 
 Serial.begin(115200);
 

}




void ldr(int n)
{ 
  int a,b,c,d,e,f;
  const int thresh=300;
  a=analogRead(ldrpin0);
  b=analogRead(ldrpin1);
  c=analogRead(ldrpin2);
  d=analogRead(ldrpin3);
  e=analogRead(ldrpin4);
  f=analogRead(ldrpin5);

  if (a>thresh || b>thresh || c>thresh || d>thresh || e>thresh || f>thresh )
    {
      Serial.println(n);
    }
       
}









void loop() {

  

  ldr(1);
  



  delay(motordelay);
  
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(motordelay);


  ldr(2);


  delay(motordelay);

  digitalWrite(7,LOW);
  digitalWrite(8, HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(motordelay);

ldr(3);

  
delay(motordelay);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  delay(motordelay);

ldr(4);

  delay(motordelay);


  digitalWrite(7,LOW);
  digitalWrite(8, LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  delay(motordelay);

ldr(5);

  delay(motordelay);
////////////////


   digitalWrite(7,LOW);
  digitalWrite(8, LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  delay(motordelay);

ldr(4);

  delay(motordelay);

  
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(motordelay);

ldr(3);

delay(motordelay);
  
   digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(motordelay);

ldr(2);

  delay(motordelay);

  
  digitalWrite(7,LOW);
  digitalWrite(8, LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  delay(motordelay);

ldr(1);

}
