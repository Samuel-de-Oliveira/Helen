/*   -*- Helen Souce code -*-
 *
 * The project type is "Single HC-SR04", the
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
 *
 */


// ----- *X* ----- //


/*   -*- Includes -*-
/* * ------------------ * */
#include <Ultrasonic.h>
#include "buzzerSound.h"
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

void setup() {
  
  /*
     Here is the buzzer and vibraton set.
     To check or change all sounds and
     vibration control, check the buzzerSound.h

     NOTE: Some beeps should be annoying, so if
     don't like the sound you can change in
     buzzerSound file.
  */
  pinMode(vibrationPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);


  /*   -*- Begin Serial monitor and show a message -*-
   * 
   * Here will Only show the start message and
   * nothing special than this.
   *
  /* * ------------------------------------------------------------------------------------- * */
  Serial.begin(9600);
  Serial.println("The monitor serial is only to see if the components is working correctly");
  Serial.println("else this don't have anything more to see here.");
  delay(1000);
  /* * ------------------------------------------------------------------------------------- * */
  
}

void loop() {
  
  /*   -*- Show the Distance (In centimetres and inches) -*-
  /* * ------------------------ * */
  Serial.print(Sensor.read(CM));
  Serial.print(" Cm, ");
  Serial.print(Sensor.read(INC));
  Serial.println(" Inc.");
  /* * ------------------------ * */

  if ( Sensor.read(Measure) == 0 ) {

    /*   -*- Show the error messase -*-
     *    
     * If the sensor is not working or is
     * disconnected this message will be showed.   
     *
    /* * ---------------------------------------------------------------------------- * */
    Serial.println("Oh no, something went wrong!");
    Serial.println("Please check this link: https://github.com/Samuel-de-Oliveira/Helen");
    Serial.println("For more info about this error.");
    
    warningBeep(buzzerPin, vibrationPin);
    /* * ---------------------------------------------------------------------------- * */
    
  } else if ( Sensor.read(Measure) <= nearDistance ) {

    /*   -*- Fast beep -*-
    /* * ------------------------------------------- * */
    Serial.println("I've found something near me!");
    fastBeep(buzzerPin, vibrationPin);
    /* * ------------------------------------------- * */
    
  } else if ( Sensor.read(Measure) <= Distance ) {

    /*   -*- Slow beep -*-
    /* * ------------------------------------------- * */
    Serial.println("I've found something distant me!");
    slowBeep(buzzerPin, vibrationPin);
    /* * ------------------------------------------- * */
    
  } else if ( Sensor.read(Measure) <= farDistance ) {

    /*   -*- Very slow beep -*-
    /* * ------------------------------------------- * */
    Serial.println("I've found something very distant me!");
    verySlowBeep(buzzerPin, vibrationPin);
    /* * ------------------------------------------- * */
    
  }

}
