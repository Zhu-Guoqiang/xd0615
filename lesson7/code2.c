#define IN1 7
#define S1 3
#define S2 4
#define S3 5
#define S4 6
#define LT 9
#define BT 8
int pinInterrupt=2;
int tick = 0;
void myfunc(){
   tick=-1;//因为后面loop函数里面还要执行i++；为了重置i，需令它为-1
   }

void setup()
{
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);//输入1
  pinMode(S1, OUTPUT);//片选1
  pinMode(S2, OUTPUT);//片选2
  pinMode(S3, OUTPUT);//片选3
  pinMode(S4, OUTPUT);//片选4
  pinMode(LT,OUTPUT);//测试
  pinMode(BT,OUTPUT);//消隐
  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH);
  digitalWrite(S1,HIGH);
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  digitalWrite(S4,HIGH);
  digitalWrite(IN1,LOW);
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), myfunc,CHANGE); 
 
}
 void loop()
{   
    for(tick=0;tick<10; tick++){   
    if(tick==10) tick=0; 
    byte command=(byte)tick;
    digitalWrite(3,command&0x1);
    digitalWrite(4,(command>>1)&0x1);
    digitalWrite(5,(command>>2)&0x1);
    digitalWrite(6,(command>>3)&0x1);
     Serial.print("Number: ");
     Serial.println(tick);
    delay(1000);
  
  }
  
 }
