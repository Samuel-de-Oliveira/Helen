/*   -*- Helen Souce code -*-
 *
 * The project type is "PIR with HC-SR04", the
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

void setup() {
  
  // Isn't done yet

}

void loop() {

  // Isn't done yet

}
