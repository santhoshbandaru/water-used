**PAGE OF INDEX**

  1. INITIATION.
  
  2. INTRODUCTION.

  3. PLANNING.

  4. EXECUTION.

  5. CLOSER.

  6. HARDWARE REQUIREMENT
  
  7. SOFTWARE REQUIREMENT 
  


 **INITIATION** :

     Water plays vital role in our day to day life.
     But these days water crisis has become a major global risk.
     In India people from villages are walking for miles to get a bucket of water.
     54% of Indian’s are suffering from water stress.So,we need to conserve water for our future generations.
     Thus,we have to minimize usage of water in our day to day life.
     Eventhough we reduce water usage,unknowingly water gets wasted i.e., through leakages etc. 
     This project helps to manage and plan the usage of water so that we can reduce the water crisis.
     In this project we mainly concentrate on leakage detection,water level indication of tanks and moniter the water consumed by the community. 
 


**INTRODUCTION** :

     Water flow sensor consists of a plastic valve body, a water rotor, and a hall-effect sensor.
     When water flows through the rotor, rotor rolls. Its speed changes with different rate of flow. 
     The hall-effect sensor outputs the corresponding pulse signal. 
     This one is suitable to detect flow in water dispenser.
     Using this flow sensor we can determine the amount of water consumed by each family of a community.
     And also leakages can be detected using this sensor.
     And for the sake of water level indication ultrasonic sensor is placed in the tank 
     which continuously informs the water level at the current time. 
     This information will be updated on the freedom box and using an android application, user can visualize 
     the water level on a Smartphone anywhere that is connected to Internet. 
     According to the level of water in the tank the motor functioning will be automatically controlled, at low level of 
     water motor will automatically turn on and when tank is about to fill up it will cut off.     

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              







**PLANNING :**

   The output of the flow sensor and the ultrasonic sensor  is given as the input to the micro controller.
   The whole data will be collected through the micro controller,and sends to de-centralized network. 
    From this data is accessed by a household or a community, Since the data is totally decentralised it can’t be accessed by other users.



**EXECUTION :**
Initially we calculated readings of flow sensor for every one minute of time interval and we have taken average of those values.
   With the help of this data we can find consumption of water by a community or household etc..
   On the other hand the water in the tank is monitored by the ultrasonic sensor inserted
     in the top of the tank which continuously informs the water level at the current time.
     According to the level of water in the tank the motor functioning will be automatically controlled, 
     at low level of water motor will automatically turn on and when tank is about to fill up it will cut off.     
     Through this the observation of water level is made easy and wastage of water can be prevented. 
     Completion or urgent requirement can be known early. 
     All the data that had collected from  the sensors is sent into THINGS BOARD after which the data is sent into decentalised 
     server called FREEDOM BOX ,
     It is designed to be secured,flexible and simple.Freedom box builds freedom into the internet by putting you in control of your activity 
     and data on the net.	
	 
**CLOSER :**
     
   Water monitoring is of vital imperativeness as it gives particular data about the consumption and controlled usage of water.
    This project helps to manage and plan the usage of water so that we can reduce the water crisis.
     Hence, with this project leakages are identified and water watage will be prevented
     In future this project can be extended by using
     a) LID sensor basing on availability
     b) Pressure sensor.
     c) Also through LID sensor the underground water system of a society can be observed.

 

**HARDWARE REQUIREMENTS**:

  1.FLOW SENSOR :YF-S201 Hall Effect Water Flow Meter / Sensor
        This sensor sits in line with your water line and contains a pinwheel sensor to measure how much liquid has moved through it. There's an integrated magnetic hall effect sensor that outputs an electrical pulse with every revolution. The hall effect sensor is sealed from the water pipe and allows the sensor to stay safe and dry.The sensor comes with three wires: red (5-24VDC power), black (ground) and yellow (Hall effect pulse output). By counting the pulses from the output of the sensor, you can easily calculate water flow. Each pulse is approximately 2.25 milliliters. Note this isn't a precision sensor, and the pulse rate does vary a bit depending on the flow rate, fluid pressure and sensor orientation. It will need careful calibration if better than 10% precision is required. However, its great for basic measurement tasks!
     We have as example Arduino sketch that can be used to quickly test the sensor, it will calculate the approximate flow of water in liters/hour.
     The pulse signal is a simple square wave so its quite easy to log and convert into liters per minute using the following formula.
     Pulse frequency (Hz) / 7.5 = flow rate in L/min.

   A flow meter works by measuring the amount of a liquid, gas, or steam flowing through or around the flow meter sensors. ... The flow (Q) is equal to the cross-sectional area of the pipe (A) in a volumetric flow meter, and the velocity of the flowing fluid (v): Q = A * 
     **Features** :
     • Model: YF-S201    
     • Sensor Type: Hall effect  
     • Working Voltage: 5 to 24v DC (min tested working voltage 4.5V)  
     • Max current draw: 15mA @ 5V  
     • Output Type: 5V TTL  
     • Working Flow Rate: 1 to 30 Liters/Minute  
     • Working Temperature range: -25 to +80℃  
     • Working Humidity Range: 35%-80% RH   
     • Accuracy: ±10%  
     • Maximum water pressure: 2.0 MPa  
     • Output duty cycle: 50% +-10%  
     • Output rise time: 0.04us  
     • Output fall time: 0.18us  
     • Flow rate pulse characteristics: Frequency (Hz) = 7.5 * Flow rate (L/min)  
     • Pulses per Liter: 450 
     • Durability: minimum 300,000 cycles  
     • Cable length: 15cm  
     • 1/2" nominal pipe connections, 0.78" outer diameter, 1/2" of thread  
     • Size: 2.5" x 1.4" x 1.4"  
   
   connection details:
     • Red wire : +5V  
     • Black wire : GND  
     • Yellow wire : PWM output.


   2.ULTRASONIC SENSOR :
        
   An ultrasonic sensor is an instrument that measures the distance to an object using ultrasonic sound waves.An ultrasonic sensor uses a transducer to send and receive ultrasonic pulses that relay back information about an object’s proximity.  
     High-frequency sound waves reflect from boundaries to produce distinct echo patterns.
     The ultrasonic sensor works on the principle of SONAR and RADAR system which is used to determine the distance to an object. An ultrasonic sensor generates the high-frequency sound (ultrasound) waves. 
     Operating voltage: +5V  
     •Theoretical  Measuring Distance: 2cm to 450cm  
     •Practical Measuring Distance: 2cm to 80cm  
     •Accuracy: 3mm  
     •Measuring angle covered: <15°  
     •Operating Current: <15mA  
     •Operating Frequency: 40Hz  


   3. NODEMCU : 
       
  Node-MCU is an open source IoT platform. It includes firmware which runs on the ESP8266 WiFi -SoC from Express if, and hardware which is based on the ESP-12 module. The term “Node-MCU” by default refers to the firmware rather than the dev kits. The firmware ESP8266 uses the c/c++/Lua scripting language. It is built on the  ESP8266. It uses many open source projects. LUA based interactive firmware for Express if ESP8622 Wi-Fi-SoC, as well as an open-source hardware board that contrary to the $3 ESP8266 Wi-Fi modules includes a CP2102 TTL to USB chip for programming and debugging, is breadboard-friendly, and can simply be powered via its micro USB port.
     NodeMCU provides access to the GPIO (General Purpose Input/Output) and a pin mapping table is part of the API documentation.[17]
     This work aims to build an Internet based system that enables the remote monitoring of a water/flow meters. 
     **Features** :  
     •Wi-Fi Module – ESP-12E module similar to the ESP-12 module but with 6 extra GPIOs.  
     • USB – micro USB port for power, programming and debugging  
     •Headers – 2x 2.54mm 15-pin header with access to GPIOs, SPI, UART, ADC, and power pins Misc – Reset and Flash buttons 
     •Power – 5V via micro USB port,operating voltage - 3.3v
     •Dimensions – 49 x 24.5 x 13mm  
     
   4. RELAY :
     
  A relay is an electrically operated device. It has a control system and (also called input circuit or input contactor) and controlled system (also called output circuit or output cont actor). It is frequently used in automatic control circuit. To put it simply, it is an automatic switch to controlling a high-current circuit with a low-current signal.  
     It works on the principle of an electromagnetic attraction. When the circuit of the relay senses the fault current, it energises the electromagnetic field which produces the temporary magnetic field.
     This magnetic field moves the relay armature for opening or closing the connections. 
     The small power relay has only one contacts, and the high power relay has two contacts for opening the switch.
     The each channel in the module has three connections named NC,COM and NO.
     Depending on the input signal tigger mode,the jumper cap can be placed at high level effective mode which 'closes' the normally open(NO) switch at high level input and at low level effective mode which operates the same but at low level input.


**SOFTWARE REQUIREMENTS**:     

The technology we used are arduino and things board.
    
   1. ARDUINO :
          
         Arduino is an open-source platform used for building electronics projects. Arduino consists of both a physical programmable circuit board (often referred to as a microcontroller) and a piece of software, or IDE (Integrated Development Environment) that runs on your computer, used to write and upload computer code to the physical board.
         The Arduino platform has become quite popular with people just starting out with electronics, and for good reason. Unlike most previous programmable circuit boards, the Arduino does not need a separate piece of hardware (called a programmer) in order to load new code onto the board -- you can simply use a USB cable. Additionally, the Arduino IDE uses a simplified version of C++, making it easier to learn to program. Finally, Arduino provides a standard form factor that breaks out the functions of the micro-controller into a more accessible package.
    
   2.  THINGS BOARD: 
          
         ThingsBoard is an open-source IoT platform for data collection, processing, visualization,analizing and device management. it is secure and private.
         It is free for both personal and commercial usage and you can deploy it anywhere.
         main purpose of thingsboard is data collecting,analizing and visualize data from device
         Thingsboard is scalable,fault,tolernt,customizable,robust,and efficient.
         If this is your first experience with the platform we recommend to review what-is-thingsboard and getting started guide.


