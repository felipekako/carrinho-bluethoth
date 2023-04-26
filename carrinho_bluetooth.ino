#include <SoftwareSerial.h>

SoftwareSerial bt(0,1);

//lado esquerdo
int ENA = 10;
int IN1 = 9;
int IN2 = 8;

//lado direito
int ENB = 5;
int IN3 = 7;
int IN4 = 6;

char t;

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
   pinMode(IN1,OUTPUT);
    pinMode(IN2,OUTPUT);
     pinMode(IN3,OUTPUT);
      pinMode(IN4,OUTPUT);
 analogWrite(ENA,255);
 analogWrite(ENA,255);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
    t = Serial.read();

    if(t == 'F'){
       digitalWrite(IN1,HIGH);
       digitalWrite(IN2,LOW);
       digitalWrite(IN3,LOW);
       digitalWrite(IN4,HIGH);
      }
   else  if(t == 'B'){
       digitalWrite(IN1,LOW);
       digitalWrite(IN2,HIGH);
       digitalWrite(IN3,HIGH);
       digitalWrite(IN4,LOW);
      }
    else   if(t == 'L'){
       digitalWrite(IN1,LOW);
       digitalWrite(IN2,HIGH);
       digitalWrite(IN3,LOW);
       digitalWrite(IN4,HIGH);
      }
     else  if(t == 'R'){
       digitalWrite(IN1,HIGH);
       digitalWrite(IN2,LOW);
       digitalWrite(IN3,HIGH);
       digitalWrite(IN4,LOW);
      }
     else  if(t == 'S'){
       digitalWrite(IN1,LOW);
       digitalWrite(IN2,LOW);
       digitalWrite(IN3,LOW);
       digitalWrite(IN4,LOW);
      }
    }
}
