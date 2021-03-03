int motor1 = 4;
int motor2 = 5;
int en= 2;



void setup() {
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);  
  pinMode(en,OUTPUT);
  
}

void loop() {
  digitalWrite(en,LOW);
  digitalWrite(motor1,LOW);
  digitalWrite(motor2,HIGH);
  
  
}
