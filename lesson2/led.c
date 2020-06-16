int i=0;
void setup()
{  for(i=0;i<13;i=i+2)
   {  
    pinMode(i, OUTPUT);  
   }
}

void loop()
{  for(i=0;i<13;i=i+2)
  { digitalWrite(i, HIGH);
    delay(200); // Wait for 1000 millisecond(s)
    digitalWrite(i, LOW);
    delay(200); // Wait for 1000 millisecond(s)
  }
}
