# A.Sense - Temperature Sensing Glove 

#### External Project Links
 - Project Website: https://sites.google.com/view/asense/home
 - 


### Problem/Motivation 

A.Sense is a glove designed to help people have a sense of what they feel, even if they can't! People with Cognitive Insensitivity to pain cannot feel pain. Isn't that good? Well, no its not. You may take pain are something harmful to you, and you may wish at times that you couldn't feel pain. Pain is actually there to help you, protect you from further damaging your body. Now if there are people who cannot feel pain how do they know when they are harming their bodies or not?

During the creation of A.Sense I was committed into solving problems related to Cognitive Insensitivity to pain. I have just released a possible solution, the A.Sense Thermal-Sense glove. The Thermal-Sense glove basically lets you know if anything you touch is to hot/cold and will warn you if there is a chance you can result in a second or third degree burn from the heat.

### Description

My innovation is a Temperature Sensing glove. Just like the name says, it is a temperature sensing glove which uses a temperature sensor (also known as the TMP36). The temperature  sensor takes in infrared radiation given off by heat which then are converted into values. The Arduino than takes in these values and converts them into degrees celsius. Due to my coding, The arduino would send information to the corresponding digital and analog pins based on the temperature reading. If the temperature is between -10 degrees and 30 degrees, a green LED would light up indicating that it is normal. If it is between 30 - 35 degrees one red LED would light up, 2 red led’s for 35-40 degrees and 3 for 40 degrees and higher. For the one blue LED to light up the temperature would have to be between -10 and -28, 2 for -28 to -40 and 3 for -40 and up. Basically the LED’s have been coded based on severity depending on how hot or cold things are. It gives you an indication of how harmful the temperature can be to you body. If the temperature reaches higher than 40 or lower than -40. A piezo will sound. Alerting you that you may suffer serious damage to your body.  As you can see, just some coding, wiring and effort can easily solve an serious issues in today's society.

#
#

## Technology Used
#
### Arduino Uno
  
The Thermal Sense Glove uses an Arduino Uno board to send various outputs based on the reading from the temperature sensor. The Arduino Board is like the brain of the project. It handles code, sends information and reads information.  In my case it reads values from the temperature sensor which my code converts to degrees Celsius and sends an Output to the correct LED.


### TMP36 (Temperature Sensor)

The TMP36 is the temperature sensor that the project uses, simply chosen due the fact that it uses infrared radiation to collect data on heat around. The sensor stores these in voltage values which have to be converted into degrees using a unique formula. To get:

Voltage:  reading * 5.0 

voltage /= 1024.0; 

Temperature in degrees Celsius = (voltage - 0.5) * 100 ;  

The TMP36 has 3 legs, The first one is the V+ leg which is responsible of being connected to the positive terminal on a breadboard. The second one is Vout, which is basically the pin that sends/receives information. The final pin is Ground which is connected to the negative terminal on a breadboard.
                                          
### Passive Buzzer (Piezo) and LED's

The project also uses a Piezo, The Piezo is used to alert the user when something is too hot or cold and can be dangerous to the human being. The Piezo works along with the LED's as it only works when there are 3 LED's on in either color. The Piezo consists of two legs, one positive and one negative.  The negative connects to the negative terminal and the positive connects to the output pin. My innovation also uses Light Emitting Diodes. I have them in different colours where green means normal and blue means cold and red means hot. The structure of the LED is very similar to the piezo, there is a positive side and a negative side. 
