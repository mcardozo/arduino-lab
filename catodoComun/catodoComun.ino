int led = 13;
int led1 = 12;
int led2 = 11;
int led3 = 10;
int led4 = 9;
int led5 = 8;
int led6 = 7;


void setup() { 
  pinMode(led, OUTPUT); 
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT); 
  pinMode(led3, OUTPUT); 
  pinMode(led4, OUTPUT); 
  pinMode(led5, OUTPUT); 
  pinMode(led6, OUTPUT);
}


void loop() { 
digitalWrite(led, LOW);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
digitalWrite(led5, LOW);
digitalWrite(led6, LOW);
  
digitalWrite(led2, HIGH);
delay(1000); 

//numero cero
digitalWrite(led2, LOW);
digitalWrite(led, HIGH);
digitalWrite(led1, HIGH);
digitalWrite(led3, HIGH); 
digitalWrite(led4, HIGH);
digitalWrite(led5, HIGH); 
digitalWrite(led6, HIGH); 
delay(1000); 

 //numero uno
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
digitalWrite(led5, LOW);
digitalWrite(led6, LOW);
delay(1000);

//numero dos
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led4, LOW);
digitalWrite(led5, HIGH);
digitalWrite(led6, HIGH);
delay(1000);

//numero tres
digitalWrite(led1, HIGH);
digitalWrite(led6, LOW);
delay(1000);

}
