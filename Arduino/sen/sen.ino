// 아두이노에 연결된 각 압력 센서는 개별적으로 출력값의 편차가 있어, 정확한 값을 측정하기 위해 각 센서의 고유한 기준값(유동값)을 사전에 측정
int sensor0 = A0;                           // 센서값을 아나로그 A0핀 설정
int sensor1 = A1;                           // 센서값을 아나로그 A1핀 설정
int sensor2 = A2;                           // 센서값을 아나로그 A2핀 설정
int sensor3 = A3;                           // 센서값을 아나로그 A3핀 설정

int value = 0;                                       // loop에서 사용할 변수 설정

void setup()
{ 
  Serial.begin(9600);                   
}

void loop()
{
  int value0 = analogRead(sensor0);
  int value1 = analogRead(sensor1);
  int value2 = analogRead(sensor2);
  int value3 = analogRead(sensor3);
  
  Serial.print("0, ");
  Serial.println(value0);
  Serial.print("1, ");
  Serial.println(value1);
  Serial.print("2, ");
  Serial.println(value2);
  Serial.print("3, ");
  Serial.println(value3);

  delay(3000);                               
}
