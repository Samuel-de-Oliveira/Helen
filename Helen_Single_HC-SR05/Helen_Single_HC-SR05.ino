/*   -*- Helen Souce code -*-
 *
 * The project type is "Single HC-SR05", the
 * we recomend you read the tutorial in official
 * repository after upload the code.
 *
 * This is the source code of Helen project
 * you are free to edit anything in this code.
 *
 * Warning: If you want to change something in
 * the code, please read the comments to avoid
 * errors.
 *
 * Repository:    https://github.com/Samuel-de-Oliveira/Helen
 * License:       MIT
 * Created by:    Samuel de Oliveira (Github: Samuel-de-Oliveira)
 * Contribuitors: Nobody
 * Version:       1.0
 *
 */


// ----- *X* ----- //


/*   -*- Includes -*-
/* * ------------------ * */
#include <Ultrasonic.h>
#include "buzzerSound.h"
#include "tools.h"
/* * ------------------ * */

/*   -*- Pins -*-
/* * -------------------- * */
const char triggerPin   {6};
const char echoPin      {5};
const char vibrationPin {10};
const char buzzerPin    {9};
/* * -------------------- * */

/*   -*- Constants -*-
 *    
 * This is all the constants you can change.
 * Change based in your needs.
 * 
 * For more info about these constants:
 * https://github.com/Samuel-de-Oliveira/Helen.
 *  
/* * --------------------------------- * */
const byte Measure      {CM};
const byte farDistance  {60};
const byte Distance     {45};
const byte nearDistance {20};
/* * --------------------------------- * */


// ----- *X* ----- //


/*   -*- Start the sensor -*-
/* * -------------------------------- * */
Ultrasonic Sensor(triggerPin, echoPin);
/* * -------------------------------- * */


  
  /*
     Here is the buzzer and vibraton set.
     To check or change all sounds and
     vibration control, check the buzzerSound.h

     NOTE: Some beeps should be annoying, so if
     don't like the sound you can change in
     buzzerSound file.
  */

void setup() {

 pinMode (6,OUTPUT); //Insert HC-SR-05 with VCC in pin 6
  pinMode (5, INPUT); // Assign pin 5 to Echo
  pinMode (4, OUTPUT);// Assign pin 4 to Trig
  pinMode (2,OUTPUT); // Assign pin 2 to GND.
  Serial.begin(9600); // This will allow you to read how far away your sensor is later
}

/************************ THIS IS NOT NEEDED **********************************
  /*   -*- Begin Serial monitor and show a message -*-
   * 
   * Here will Only show the start message and
   * nothing special than this.
   *
  /* * ------------------------------------------------------------------------------------- * */
 /* Serial.begin(9600);
  Serial.println("The monitor serial is only to see if the components is working correctly");
  Serial.println("else this don't have anything more to see here.");
  delay(1000);
  /* * ------------------------------------------------------------------------------------- * */
  
}
*******************************************************************/

/*void loop() {*/

  /*
   *  The code is very simple. The "Sentor.read" check the
   *  distance based in the measure you've seted before.
   *  
   *  And will comparate the distance of Sensor.read with
   *  "farDistance", "Distance" and "nearDistance".
   */

 
  
  /***************************  NOT NEEDED ALSO **********************
  if ( Sensor.read(Measure) == 0 ) {

    /*   -*- Show the error messase -*-
     *    
     * If the sensor is not working or is
     * disconnected this message will be showed.   
     *
    /* * ---------------------------------------------------------------------------- * */
   /* Serial.println("Oh no, something went wrong!");
    Serial.println("Please check this link: https://github.com/Samuel-de-Oliveira/Helen");
    Serial.println("For more info about this error.");
    
    warningBeep(buzzerPin, vibrationPin);
    /* * ---------------------------------------------------------------------------- * */
    
  /*} else if ( Sensor.read(Measure) <= nearDistance ) {

    /*   -*- Fast beep -*-
    /* * ------------------------------------------- * */
   /* showDistance(Sensor);
    Serial.println("I've found something near me!");
    fastBeep(buzzerPin, vibrationPin);
    /* * ------------------------------------------- * */
    
 /* } else if ( Sensor.read(Measure) <= Distance ) {

    /*   -*- Slow beep -*-
    /* * ------------------------------------------- * */
  /*  showDistance(Sensor);
    Serial.println("I've found something distant me!");
    slowBeep(buzzerPin, vibrationPin);
    /* * ------------------------------------------- * */
    
  /*} else if ( Sensor.read(Measure) <= farDistance ) {

    /*   -*- Very slow beep -*-
    /* * ------------------------------------------- * */
    /* showDistance(Sensor);
    Serial.println("I've found something very distant me!");
    verySlowBeep(buzzerPin, vibrationPin);
    /* * ------------------------------------------- * */
    
  }

}
**************************************************************/
  
  
void loop()
{
  long duration, cm; // Initialize variables for duration and cm

  digitalWrite(6, HIGH); // Power the sensor
  digitalWrite(4, LOW); // Clear pulse before sending a 10 microsecond ping,
  delayMicroseconds(2);
  digitalWrite(4, HIGH);
  delayMicroseconds(10);
  digitalWrite(4, LOW);

  duration = pulseIn(5, HIGH); // Detect pulse length from the Echo pin, measured in microseconds
  cm = (duration/2)/29.155; // Divide duration in half (due to round trip), then convert distance to centimeters (1cm per 29.155 microseconds), assign to cm variable

  Serial.print(cm); // Print distance in cm to serial monitor
  Serial.print(“cm”);
  Serial.println();

  delay(100); // Delay

  int note = 0; // Assign note based on distance, spacing notes per 6cm

  if(cm<=48&&cm>42) {
     note = 523;
  } else if(cm<=42&&cm>36) {
     note = 493;
  } else if(cm<=36&&cm>30) {
     note = 440;
  } else if(cm<=30&&cm>24) {
     note = 392;
  } else if(cm<=24&&cm>18) {
     note = 349;
  } else if(cm<=18&&cm>12) {
     note = 329;
  } else if(cm<=12&&cm>6) {
     note = 294;
  } else if(cm<=6) {
     note = 261;
}

if (note == 0) { // If distance isn’t within 48cm, play nothing
noTone(9);
} else {
tone(9, note, 200); // Play assigned note for 200 milliseconds
}

delay(10); // Brief pause
}











  
  
  
  
  
