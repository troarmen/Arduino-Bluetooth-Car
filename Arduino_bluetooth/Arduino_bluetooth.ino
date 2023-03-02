#include <SoftwareSerial.h>
SoftwareSerial bluetooth(0,1);

#define MotorD 5
#define Motord 6
#define MotorE 9
#define Motore 10

int value;

void setup() {
  
  Serial.begin(9600);
  pinMode(MotorD,OUTPUT);
  pinMode(MotorE,OUTPUT);
  pinMode(Motord,OUTPUT);
  pinMode(Motore,OUTPUT);
  
}

void loop() {
  
  if(Serial.available()){
    value = Serial.read();
    }
   
    if(value=='F'){
      digitalWrite(MotorD,HIGH);
      digitalWrite(MotorE,HIGH);
     
    }

    if(value=='B'){
      digitalWrite(Motord,HIGH);
      digitalWrite(Motore,HIGH);
        
    }

 
   if(value=='L'){
      digitalWrite(MotorD,HIGH);
      digitalWrite(MotorE,LOW);
        
  }
  
    if(value=='R'){
      digitalWrite(MotorD,LOW);
      digitalWrite(MotorE,HIGH);
    }
 
    
  
Serial.println(Serial.read());
}
