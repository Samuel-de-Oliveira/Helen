/*   -*- Helen Souce code -*-
 *
 * This is the source code of Helen project
 * you are free to edit anything in this code.
 *
 * Warning: If you want to change something in
 * the code, please read the comments to avoid
 * errors.
 *
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
/* * --------------------------------- * */
const byte Distance     {100};
const byte nearDistance {35};
/* * --------------------------------- * */


// ----- *X* ----- //


// Start the sensor
Ultrasonic Sensor(triggerPin, echoPin);

void setup() {
  
  pinMode(vibrationPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("The monitor serial is only to see if the components is working correctly");
  Serial.println("else this don't have anything more to see here.");
  delay(1000);
  
}

void loop() {

  Serial.print(Sensor.read(CM));
  Serial.print(" Cm, ");
  
  Serial.print(Sensor.read(INC));
  Serial.println("Inc.");

  delay(75);

}
