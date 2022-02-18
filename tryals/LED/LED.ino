"""
以下紫苑色
    analogWrite(R_pin, 150);
    analogWrite(G_pin, 138);
    analogWrite(B_pin, 189);
"""
int R_pin = 25;
int G_pin = 22;
int B_pin = 21;
bool flip=true;
int count=0;
int line=2;

void setup() {
  pinMode(R_pin, OUTPUT);
  pinMode(G_pin, OUTPUT);
  pinMode(B_pin, OUTPUT);
  // pinMode(26, INPUT);
}
void loop() {
  if(flip){
    analogWrite(R_pin, 29);
    analogWrite(G_pin, 29);
    analogWrite(B_pin, 29);
    count+=1;
    if(count>line){
      flip=false;
      count=0;
    }
  }else{
    analogWrite(R_pin, 230);
    analogWrite(G_pin, 230);
    analogWrite(B_pin, 230);
    count+=1;
    if(count>line){
      flip=true;
      count=0;
    }
  }
}