#include <Servo.h>
const int PIRpin = 7;
const int SERVOpin = 9;
Servo servo0;

void setup() { 
  Serial.begin(9600);   // シリアル接続を9600に設定
  servo0.attach(SERVOpin);//D9にサーボの信号線を接続
  //initialize
  servo0.write(-5);
  delay(1000);
  servo0.write(25);
  delay(1000);
}

int fon = 0;
int foff = 0;
int human_sensor(void);
int human_sensor() {
  while(1){
    Serial.print(digitalRead(PIRpin));
    // 反応しているときLOW
    if (digitalRead(PIRpin) == LOW){
      fon++;
    }
    if (digitalRead(PIRpin) == HIGH){
      foff++;
    }
    if(fon > 7){
      Serial.println("点灯");
      foff = 0;
      fon = 0;
      return 1;
    }
    // 5分反応しなかったら消灯
    if(foff > 300){
      Serial.println("消灯");
      foff = 0;
      fon = 0;
      return 0;
    }
    delay(100);
  }
}

void loop(){
  int juage = human_sensor();
  //消す
  if (juage == 0){
    servo0.write(-5);
    //誤作動があるため
    delay(5000);
  }
  //点ける
  else{
    servo0.write(25);
    delay(500);
  }
}
