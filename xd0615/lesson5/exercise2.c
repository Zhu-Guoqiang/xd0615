#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5
#define S1 8
#define S2 9
#define S3 10
#define S4 11
#define LT 6
#define BT 7
void setup()
{ Serial.begin(9600);
 
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(S4, OUTPUT);
  pinMode(LT,OUTPUT);
  pinMode(BT,OUTPUT);
  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH);
  digitalWrite(S1,HIGH);
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  digitalWrite(S4,HIGH);

}
byte income1;byte income2;byte income3;byte income4;
int i=0;
int num=0;
void loop()
{
   if(Serial.available()>0){
  	num=Serial.parseInt();
     Serial.println(num);
    income4=(byte)(num/1000);
    income3=(byte)(num/100%10);  
    income2=(byte)(num/10%10); 
    income1=(byte)(num%10);  
     
      digitalWrite(S1,LOW);
      digitalWrite(2,income1&0x1);
      digitalWrite(3,(income1>>1)&0x1);
      digitalWrite(4,(income1>>2)&0x1);
      digitalWrite(5,(income1>>3)&0x1);
      digitalWrite(S1,HIGH);
     
       digitalWrite(S2,LOW);
      digitalWrite(2,income2&0x1);
      digitalWrite(3,(income2>>1)&0x1);
      digitalWrite(4,(income2>>2)&0x1);
      digitalWrite(5,(income2>>3)&0x1);
      digitalWrite(S2,HIGH);
     
       digitalWrite(S3,LOW);
      digitalWrite(2,income3&0x1);
      digitalWrite(3,(income3>>1)&0x1);
      digitalWrite(4,(income3>>2)&0x1);
      digitalWrite(5,(income3>>3)&0x1);
      digitalWrite(S3,HIGH);
     
       digitalWrite(S4,LOW);
      digitalWrite(2,income4&0x1);
      digitalWrite(3,(income4>>1)&0x1);
      digitalWrite(4,(income4>>2)&0x1);
      digitalWrite(5,(income4>>3)&0x1);
      digitalWrite(S4,HIGH);
     
   }                     
}
