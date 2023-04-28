int trig = 4;
int eco  = 5;
int buz  = 3;
int duracion;
int distancia;

void setup() {
 pinMode(trig, OUTPUT);
 pinMode(eco, OUTPUT);
 pinMode(buz, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, HIGH);
  delay(500);
  digitalWrite(trig,LOW);
  duracion = pulseIn(eco, HIGH);
  distancia = duracion / 58.2;
  Serial.println(distancia);
  delay(200);
  if(distancia <= 0 && distancia >= 4); {
  }
  if(distancia <= 5 && distancia >= 10); {
  Serial.print("DO");
    tone(buz, 261.63, 500 );
    digitalWrite(buz, HIGH);
    delay(500);
    digitalWrite(buz, LOW);
  }
  if(distancia <= 11 && distancia >= 15); 
  {
    Serial.print("RE");
    tone(buz, 293.66 , 500);
    digitalWrite(buz, HIGH);
    delay(100);
    digitalWrite(buz, LOW);
}
 if(distancia <= 16 && distancia >= 20); 
  {
    Serial.print("MI");
    tone(buz, 329.63 , 500);
    digitalWrite(buz, HIGH);
    delay(100);
    digitalWrite(buz, LOW);
}
if(distancia <= 21 && distancia >= 25); 
  {
    Serial.print("FA");
    tone(buz, 349.23 , 500);
    digitalWrite(buz, HIGH);
    delay(100);
    digitalWrite(buz, LOW);
}
if(distancia <= 26 && distancia >= 30);
  {
    Serial.print("SOL");
    tone(buz, 392 , 500);
    digitalWrite(buz, HIGH);
    delay(100);
    digitalWrite(buz, LOW);
}
if(distancia <= 31 && distancia >= 35);
  {
    Serial.print("LA");
    tone(buz, 440 , 500);
    digitalWrite(buz, HIGH);
    delay(100);
    digitalWrite(buz, LOW);
}
if(distancia <= 36 && distancia >= 40);
  {
    Serial.print("SI");
    tone(buz, 493.88 , 500);
    digitalWrite(buz, HIGH);
    delay(100);
    digitalWrite(buz, LOW);
}
if(distancia <= 41 && distancia >= 45);
  {
    Serial.print("DO");
    tone(buz, 523.25 , 500);
    digitalWrite(buz, HIGH);
    delay(100);
    digitalWrite(buz, LOW);

}
}
