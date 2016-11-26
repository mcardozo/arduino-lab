#include <SoftwareSerial.h>

const int led2 = 2;
const int led3 = 3;
const int led4 = 4;
String content;

SoftwareSerial BT1(10, 11); // RX | TX

void setup(){
  
     pinMode(led2, OUTPUT);
     pinMode(led3, OUTPUT);
     pinMode(led4, OUTPUT);         
     
     pinMode(8, OUTPUT);        
     pinMode(9, OUTPUT);        
     digitalWrite(9, HIGH);
     delay (500);
     Serial.begin(9600);
     Serial.println("Levantando el modulo HC-06");
     digitalWrite (8, HIGH); 
     Serial.println("Esperando comandos AT:");
     BT1.begin(9600); 
}

void loop(){  
  
  if (BT1.available()){
    char c = BT1.read();
    content.concat(c);
    if(content == "rojo"){
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
      content = "";
    }
    if(content == "amarillo"){
      digitalWrite(led3, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led4, LOW);
      content = "";
    }
    if(content == "verde"){
      digitalWrite(led4, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led2, LOW);
      content = "";
    }
    if(content == "todos"){
      digitalWrite(led4, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led2, HIGH);
      content = "";
    }
    if(content == "off"){
      digitalWrite(led4, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led2, LOW);
      content = "";
    }
  }
}
 
