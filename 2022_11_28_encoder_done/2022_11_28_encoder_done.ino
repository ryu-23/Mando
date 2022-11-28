 #include <MsTimer2.h>

 int encoder0PinA = 2;
 int encoder0PinB = 3;
 int encoder0Pos = 0;

void setup() {
  pinMode(encoder0PinA, INPUT);
  pinMode (encoder0PinB,INPUT);

  //MsTimer2::set(100, swInterrupt);
  //MsTimer2::start();
  
  attachInterrupt(0, swInterrupt, RISING);
  Serial.begin (115200);
}

void loop() {
  Serial.println (encoder0Pos);
}

void swInterrupt() {
  delayMicroseconds(100);
  if (digitalRead(encoder0PinB) == LOW) {
    encoder0Pos--;
  } else if (digitalRead(encoder0PinB) == HIGH){
    encoder0Pos++;
  }
}