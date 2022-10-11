/*   -*- Beeps for buzzer -*-
 *  
 * Code of all beep sounds here. If
 * you want to change the sound you
 * are free to do this.
 * 
 */

void warningBeep( char buzzerPin, char vibrationPin ) {
  
  for ( byte i = 0; i < 3; ++i ) {
    tone(buzzerPin, 1024, 300);
    digitalWrite(vibrationPin, HIGH);
    delay(100);
    noTone(buzzerPin);
    digitalWrite(vibrationPin, LOW);
    delay(250);
  }
  
  delay(250);
  
}
