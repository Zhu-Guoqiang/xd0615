//�����洢ģ�������ź�
int sensorValue = 0;

void setup()
{//����A0����Ϊ���ģʽ
  pinMode(A0, INPUT);
 //��ʼ������ͨ�ţ�������������Ϊ9600
  Serial.begin(9600);

}

void loop()
{
  // ��ȡ����A0�����źţ�������ת��Ϊ0~1023����ֵ
  sensorValue = analogRead(A0);
  // ͨ�����ڼ�������ӡ����ֵ
  Serial.println(sensorValue);
  delay(10); // ÿ�δ�ӡ��ʱ����
}
