/*   -*- Tools -*-
 *  
 * This is the code of the tools,
 * only things that dont make great
 * changes in the project, enjoy it.
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
