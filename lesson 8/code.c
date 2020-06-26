//用来存储模拟输入信号
int sensorValue = 0;

void setup()
{//配置A0引脚为输出模式
  pinMode(A0, INPUT);
 //初始化串口通信，将波特率设置为9600
  Serial.begin(9600);

}

void loop()
{
  // 读取引脚A0输入信号；并将其转化为0~1023的数值
  sensorValue = analogRead(A0);
  // 通过串口监视器打印出数值
  Serial.println(sensorValue);
  delay(10); // 每次打印的时间间隔
}
