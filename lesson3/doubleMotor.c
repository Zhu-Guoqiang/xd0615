/*
�������Ҳ������ѣ������˸���������
'f':��ʾǰ��
'b':��ʾ����
's':��ʾֹͣ
'm':��ʾ����
'a':��ʾalert,�����ѣ�����
*/
char ch=' ';
void setup()
{
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  Serial.println("ok!");
}


void loop()
{
  if(Serial.available()>0)
  {
  	ch=Serial.read();
    switch(ch)
    {
    case 'f':
      digitalWrite(3,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(13,LOW);
      break;
    case 'b':
      digitalWrite(3,LOW);
      digitalWrite(11,LOW);
      digitalWrite(13,HIGH);
      break;
    case 's':
      digitalWrite(3,LOW);
      digitalWrite(11,LOW);
      digitalWrite(13,LOW);
      break;
    case 'm':
      digitalWrite(9,HIGH);
      delay(2000);
      digitalWrite(9,LOW);
      break;
    case 'a':
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      delay(500);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      delay(500);
      break;
    default:
      break;
    }
  }
 
}
