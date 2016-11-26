
int ledRojo = 13;
int ledAmarillo = 12;
int ledVerde = 8;

void setup() {                
  pinMode(ledRojo, OUTPUT);     
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  
  digitalWrite(ledRojo, HIGH);   
  delay(2000);
  
  digitalWrite(ledAmarillo, HIGH);
  delay(1000);  
  
  digitalWrite(ledRojo, LOW);
  digitalWrite(ledAmarillo, LOW);
  digitalWrite(ledVerde, HIGH);     
  delay(2000);
  
  digitalWrite(ledAmarillo, HIGH);
  delay(1000);
  
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarillo, LOW); 
    
}
