#include <Servo.h>
const int SERVOpin = 9;
Servo servo0;

void setup() { 
  Serial.begin(9600);   // シリアル接続を9600に設定
  servo0.attach(SERVOpin);//D9にサーボの信号線を接続
  servo0.write(20);
  delay(500);
}

byte command;
void loop(){
  if(Serial.available() > 0){
    //消す
    command = Serial.read();
    if (command == '0'){
      servo0.attach(SERVOpin);//D9にサーボの信号線を接続
      delay(20);
      servo0.write(0);
      //誤作動があるため
      delay(500);
      servo0.detach();
      delay(5000);
    }
    //点ける
    else if (command == '1'){
      servo0.attach(SERVOpin);//D9にサーボの信号線を接続
      delay(20);
      servo0.write(18);
      //誤作動があるため
      delay(500);
      servo0.detach();
      delay(5000);
    }
  }
}
