# How to build
<!--
![images (2)](https://user-images.githubusercontent.com/79866006/202291842-49de0cd5-9b5f-4e2c-b7c1-fa2afbb1877f.jpeg)
-->



#### Purpose of this project:

In this project, an obstacle detection system will be built with Arduino. This system mainly uses an ultrasound sensor, buzzer, LCD, and LED.


![Systeme-detection_single](https://user-images.githubusercontent.com/79866006/202284373-69d73246-0a53-4ddf-9878-58993f6775a2.png)



#### Necessary components

   - Arduino UNO
   - ultrasonic sensor (HC-SR04/HC-SR05)
   - buzzer
   - 1 resistance 220Ω
   - 1 red LED
   - LCD
   - connecting wires


#### Here are the steps of the project:

**Step 1**

DOWNLOAD AND INSTALL ARDUINO IDE FROM THE <a href="https://www.arduino.cc/en/Main/Software"> PORTAL.</a>

**Step 2 (Mounting)**

To make the assembly, we can connect :

**For LED and buzzer:**

- the terminals (+) of the red LED and buzzer to the digital pin 1 of  Arduino.

- the (-) terminals of the red LED and buzzer at the GND pin of  Arduino.


**For HC-SR04 / HC-SR05 sensor:**

- TRIG pin to pin 2 of Arduino

- Echo pin to pin 3 of Arduino.

- VCC pin to 3.3V of Arduino

- GND pin to GND of Arduino

- Ignore the `OUT` in the HC-SR05 


![board_small_2Xf0pO8kBs](https://user-images.githubusercontent.com/79866006/202285645-ba7e540f-ca4b-4e00-bcdb-547087fa0392.png)


**NOTE**

- The ultrasonic sensor we’re looking at today is the HC-SR05, a slightly upgraded 5-pin version of the older HC-SR04. 
- HC-SR04 or other ultrasonic sensors can be used, but the pin configuration will need to be modified)
- The only difference between the two is the **SRF05** sensor has an extra pin labeled `“OUT”` which could be used to connect the sensor to an oscilloscope and view the pings that are being triggered.




**For the LCD:**

- the SDA pin at the Arduino analog pin A4.

- the SCL pin at the Arduino analog pin A5.

- the VCC pin at the Arduino 5v pin.

- the GND pin at the Arduino GND pin




## <hr>

**The Complete Diagram**



![Systeme-detection-1024x807](https://user-images.githubusercontent.com/79866006/202286409-9bc339d3-cecf-4db9-881f-e28476057bce.png)




**INFO**

- For the [HC-SR04 Code explanation](../Helen_Single_HC-SR04/)
- For the [HC-SR05 Code explanation](../Helen_Single_HC-SR05/)
- Feel free to open an issue.







