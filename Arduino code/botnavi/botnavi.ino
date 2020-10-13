int a;
void setup() {
Serial.begin(9600);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);//k
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);//k
pinMode(12,INPUT);//input
analogWrite(10,150);
analogWrite(5,150);
}

void loop() 
{

a=digitalRead(12); 
//a=Serial.read();'
Serial.println(a);
if(a==1)
{
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  Serial.println("start");
  delay(500);
}
else
{
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  Serial.println("stop");
  delay(500);
}
}
