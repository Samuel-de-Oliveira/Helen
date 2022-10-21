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
  
  tone(buzzerPin, 1024, 300);
  digitalWrite(vibrationPin, HIGH);
  delay(100);
  noTone(buzzerPin);
  digitalWrite(vibrationPin, LOW);
  delay(100);
  
}

void slowBeep( char buzzerPin, char vibrationPin ) {
  
  tone(buzzerPin, 1024, 300);
  digitalWrite(vibrationPin, HIGH);
  delay(275);
  noTone(buzzerPin);
  digitalWrite(vibrationPin, LOW);
  delay(275);
  
}

void verySlowBeep( char buzzerPin, char vibrationPin ) {

  tone(buzzerPin, 1024, 300);
  digitalWrite(vibrationPin, HIGH);
  delay(375);
  noTone(buzzerPin);
  digitalWrite(vibrationPin, LOW);
  delay(375);
  
}
