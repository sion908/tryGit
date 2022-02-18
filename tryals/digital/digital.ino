"""
0,1のデジタル通信をするプログラム
大抵のデジタル機器はこれで使える
"""

int i_pin = 19;
int o_pin = 21;
bool flip=true;
int count=0;
int line=10;

void setup() {
  pinMode(i_pin, INPUT);
  // pinMode(i_pin, OUTPUT);
  pinMode(o_pin, OUTPUT);
  digitalWrite(o_pin, HIGH);
  // digitalWrite(i_pin, LOW);
}
void loop() {
  // if(flip){
  //   digitalWrite(o_pin, HIGH);
  //   digitalWrite(i_pin, LOW);
  //   count+=1;
  //   if(count>line){
  //     flip=false;
  //     count=0;
  //   }
  // }else{
  //   digitalWrite(o_pin, LOW);
  //   digitalWrite(i_pin, HIGH);
  //   count+=1;
  //   if(count>line){
  //     flip=true;
  //     count=0;
  //   }
  // }
  if (digitalRead(i_pin) == HIGH) {
    digitalWrite(o_pin, HIGH);
  } else {
    digitalWrite(o_pin, LOW);    
  }
}