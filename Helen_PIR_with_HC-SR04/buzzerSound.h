/*   -*- Beeps for buzzer -*-
 *  
 * Code of all beep sounds here. If
 * you want to change the sound you
 * are free to do this.
 * 
 * Version: 1.0
 *
 */


// ----- *X* ----- //


// Warning beep
void warningBeep( char buzzerPin, char vibrationPin ) {
  
  for ( byte i = 0; i < 3; ++i ) {
    tone(buzzerPin, 700, 300);
    digitalWrite(vibrationPin, HIGH);
    delay(90);
    noTone(buzzerPin);
    digitalWrite(vibrationPin, LOW);
    delay(200);
  }
  
  delay(250);
  
}

// Fast beep
void hotFastBeep( char buzzerPin, char vibrationPin ) {
  
  tone(buzzerPin, 1100, 300);
  digitalWrite(vibrationPin, HIGH);
  delay(75);
  noTone(buzzerPin);
  digitalWrite(vibrationPin, LOW);
  delay(75);
  
}

// Slow beep
void hotSlowBeep( char buzzerPin, char vibrationPin ) {
  
  tone(buzzerPin, 1100, 300);
  digitalWrite(vibrationPin, HIGH);
  delay(200);
  noTone(buzzerPin);
  digitalWrite(vibrationPin, LOW);
  delay(200);
  
}

// Very slow beep
void hotVerySlowBeep( char buzzerPin, char vibrationPin ) {

  tone(buzzerPin, 1100, 300);
  digitalWrite(vibrationPin, HIGH);
  delay(350);
  noTone(buzzerPin);
  digitalWrite(vibrationPin, LOW);
  delay(350);
  
}

void coldFastBeep() {

  for (byte i = 0; i < 2; ++i) {
    tone(buzzerPin, 1000, 300);
    digitalWrite(vibrationPin, HIGH);
    delay(40);
    noTone(buzzerPin);
    digitalWrite(vibrationPin, LOW);
    delay(40);
  }
  
  delay(150);

}

void coldSlowBeep() {

  for (byte i = 0; i < 2; ++i) {
    tone(buzzerPin, 1000, 300);
    digitalWrite(vibrationPin, HIGH);
    delay(40);
    noTone(buzzerPin);
    digitalWrite(vibrationPin, LOW);
    delay(40);
  }
  
  delay(400);

}

void coldVerySlowBeep() {

for (byte i = 0; i < 2; ++i) {
    tone(buzzerPin, 1000, 300);
    digitalWrite(vibrationPin, HIGH);
    delay(40);
    noTone(buzzerPin);
    digitalWrite(vibrationPin, LOW);
    delay(40);
  }
  
  delay(700);

}
