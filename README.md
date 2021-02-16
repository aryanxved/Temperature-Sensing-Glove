# Temperature-Sensing-Glove

A.Sense is a glove designed to help people have a sense of what they feel, even if they can't! People with Cognitive Insensitivity to pain cannot feel pain. Isn't that good? Well, no its not. You may take pain are something harmful to you, and you may wish at times that you couldn't feel pain. Pain is actually there to help you, protect you from further damaging your body. Now if there are people who cannot feel pain how do they know when they are harming their bodies or not?

During the creation of A.Sense I was committed into solving problems related to Cognitive Insensitivity to pain. I have just released a possible solution, the A.Sense Thermal-Sense glove. The Thermal-Sense glove basically lets you know if anything you touch is to hot/cold and will warn you if there is a chance you can result in a second or third degree burn from the heat.

<h3> Arduino Uno <h3>
  
The Thermal Sense Glove uses an Arduino Uno board to send various outputs based on the reading from the temperature sensor. The Arduino Board is like the brain of the project. It handles code, sends information and reads information.  In my case it reads values from the temperature sensor which my code converts to degrees Celsius and sends an Output to the correct LED.


TMP36 (Temperature Sensor)
The TMP36 is the temperature sensor  that my project uses. It uses infrared radiation to collect data on heat around. It stores these in values which have to be converted into degrees using a unique formula. To get:



Voltage:  reading * 5.0 

voltage /= 1024.0; 



Temperature in degrees Celsius = (voltage - 0.5) * 100 ;  



The TMP36 has 3 legs, The first one is the V+ leg which is responsible of being connected to the positive terminal on a breadboard. The second one is Vout, which is basically the pin that sends/receives information. The final pin is Ground which is connected to the negative terminal  on a breadboard.

                                          


Passive Buzzer (Piezo) and LED's
MY project also uses a Piezo, The Piezo is used to alert the user when something is too hot or cold and can be dangerous to the human being. The Piezo works along with the LED's as it only works when there are 3 LED's on in either color. The Piezo consists of two legs, one positive and one negative.  The negative connects to the negative terminal and the positive connects to the output pin. My innovation also uses Light Emitting Diodes. I have them in different colours where green means normal and blue means cold and red means hot. The structure of the LED is very similar to the piezo, there is a positive side and a negative side. 



