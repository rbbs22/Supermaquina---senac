void setup() {
  Serial.begin (9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  
}

void loop() {

  int efeito=40;
  for (int i=13; i>=9; i--) {
    
  digitalWrite(i, HIGH);
  delay(efeito);
  digitalWrite (i, LOW);
  }
  for (int i=10; i<=12; i++){
    digitalWrite(i, HIGH);
    delay (efeito);
    digitalWrite (i, LOW);
  }
}
