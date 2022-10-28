/*   -*- Tools -*-
 *  
 * Code of all tools here.
 * 
 */


// ----- *X* ----- //


// Show the distance
void showDistance( Ultrasonic Sensor ) {

  /*   -*- Show the Distance (In centimetres and inches) -*-
  /* * ------------------------ * */
  Serial.println("||---------------------||");
  Serial.print(Sensor.read(CM));
  Serial.print(" Cm, ");
  Serial.print(Sensor.read(INC));
  Serial.println(" Inc.");
  Serial.println("||---------------------||");
  /* * ------------------------ * */

}
