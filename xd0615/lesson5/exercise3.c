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
byte income[100]={0}; int s[100]={0}; byte incomed[100]={0};
int i=0;int k=0; int j=0;
long num=0;
void loop()
{
   if(Serial.available()>0){
    num=Serial.parseInt();
    Serial.println(num);
    for(i=1;num>0;i++){
      income[i]=num%10;
      num=num/10;
    }
    k=i;
      for(i=k,j=1;i>0;i--,j++){
      incomed[j]=income[i];
    }
    for(i=1;i<=(k/4)+1;i++){
      
      s[4*i-3]=8;
      s[4*i-2]=11;
      s[4*i-1]=10;
      s[4*i]=9;
      }

    for(i=1;i<=k;i++){
      digitalWrite(s[i],LOW);
      digitalWrite(2,incomed[i]&0x1);
      digitalWrite(3,(incomed[i]>>1)&0x1);
      digitalWrite(4,(incomed[i]>>2)&0x1);
      digitalWrite(5,(incomed[i]>>3)&0x1);
      digitalWrite(s[i],HIGH);
      delay(500);
      }
 
   }                     
}
