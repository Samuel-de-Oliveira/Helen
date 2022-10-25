/*   -*- Beeps for buzzer -*-
 *  
 * Code of all beep sounds here. If
 * you want to change the sound you
 * are free to do this.
 * 
 */


// ----- *X* ----- //


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

void fastBeep( char buzzerPin, char vibrationPin ) {
  
  tone(buzzerPin, 1100, 300);
  digitalWrite(vibrationPin, HIGH);
  delay(75);
  noTone(buzzerPin);
  digitalWrite(vibrationPin, LOW);
  delay(75);
  
}

void slowBeep( char buzzerPin, char vibrationPin ) {
  
  tone(buzzerPin, 1100, 300);
  digitalWrite(vibrationPin, HIGH);
  delay(200);
  noTone(buzzerPin);
  digitalWrite(vibrationPin, LOW);
  delay(200);
  
}

void verySlowBeep( char buzzerPin, char vibrationPin ) {

  tone(buzzerPin, 1100, 300);
  digitalWrite(vibrationPin, HIGH);
  delay(350);
  noTone(buzzerPin);
  digitalWrite(vibrationPin, LOW);
  delay(350);
  
}
