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
    tone(buzzerPin, 1024, 300);
    digitalWrite(vibrationPin, HIGH);
    delay(90);
    noTone(buzzerPin);
    digitalWrite(vibrationPin, LOW);
    delay(205);
  }
  
  delay(250);
  
}

void fastBeep( char buzzerPin, char vibrationPin ) {
  
  tone(buzzerPin, 1280, 300);
  digitalWrite(vibrationPin, HIGH);
  delay(175);
  noTone(buzzerPin);
  digitalWrite(vibrationPin, LOW);
  delay(175);
  
}

void slowBeep( char buzzerPin, char vibrationPin ) {
  
  tone(buzzerPin, 1280, 300);
  digitalWrite(vibrationPin, HIGH);
  delay(350);
  noTone(buzzerPin);
  digitalWrite(vibrationPin, LOW);
  delay(350);
  
}
