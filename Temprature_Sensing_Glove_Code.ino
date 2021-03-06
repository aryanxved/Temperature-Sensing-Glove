// Temprature Sensing Glove for people who cannot feel with hands
// Designed and coded by Aryan Ved


int blueLED1 = A2; //blue LEDs (temperatures <-10C) 

int blueLED2 = A1; //second blue LED analog pin

int blueLED3 = A0; //third blue LED anolog pin 

 

int redLED1 = 10; //red LEDs (temperatures >30C)

int redLED2 = 8; //second red LED pin 

int redLED3 = 7; // third redLED pin



int greenLED = 6; // green for safe touch 



int piezo = 9; //piezo pin number 



int piezodelay = 500; //amount of time the piezo stops for before making next sound

 

int sensorPin = 4;    // select the input pin for the temperature sensor

 

int sensorValue = 0;  // variable to store the value coming from the sensor

 

float temperatureC; //temperature in celcius



void setup() {

 

  pinMode(blueLED1, OUTPUT);   // declare the LED Pins as OUTPUTs:

  pinMode(blueLED2, OUTPUT); //second blueLED pin as OUTPUTs 

  pinMode(blueLED3, OUTPUT);  // third blueLED pin as OUTPUT

  pinMode(redLED1, OUTPUT);  //first redLED pin as OUTPUT

  pinMode(redLED2, OUTPUT);  //second redLED pin as OUTPUT

  pinMode(redLED3, OUTPUT);  //third redLED pin as OUTPUT

  pinMode(greenLED, OUTPUT); //greenLED in as OUTPUT

  pinMode(piezo, OUTPUT); //piezo pins as OUTPUT

  



  Serial.begin(9600);

}

void loop() {

 

  int reading = analogRead(sensorPin);  // read the value from the sensor:

  delay(500); 



   float voltage = reading * 5.0;

 voltage /= 1024.0; 



 Serial.print(voltage); Serial.println(" volts");



 float temperatureC = (voltage - 0.5) * 100 ;  //converting from 10 mv per degree wit 500 mV offset

                                               //to degrees ((voltage - 500mV) times 100)

 Serial.print(temperatureC); Serial.println(" degrees C");

 

    if (temperatureC >= -40 && temperatureC < -28)  //lights three blue LEDs

  { 

    digitalWrite(blueLED1, HIGH);  //blue LED turns on

    digitalWrite(blueLED2, HIGH);  //blue LED turns on

    digitalWrite(blueLED3, HIGH);  //blue LED turns on

    digitalWrite(redLED1, LOW);    //red LED turns off

    digitalWrite(redLED2, LOW);    //red LED turns off

    digitalWrite(redLED3, LOW);    //red LED turns off

    digitalWrite(greenLED, LOW);   //green LED turns off

    tone(piezo, 1000, 500); //activates piezo

      delay(piezodelay); //stops piezo for 0.5 seconds

  }

 

 

  if (temperatureC >= -28 && temperatureC < -20) //lights two blue LEDs

  {   

    digitalWrite(blueLED1, LOW);  //blue LED turns off

    digitalWrite(blueLED2, HIGH); //blue LED turns on

    digitalWrite(blueLED3, HIGH); //blue LED turns on

    digitalWrite(redLED1, LOW);   //red LED turns off

    digitalWrite(redLED2, LOW);   //red LED turns off

    digitalWrite(redLED3, LOW);   //red LED turns off

    digitalWrite(greenLED, LOW);  //green LED turns off

                //tells LCD what to type

    

  }

 

  if (temperatureC >= -20 && temperatureC < -10 ) //lights one blue LEDs

  { 

    digitalWrite(blueLED1, LOW);  //blue LED 

    digitalWrite(blueLED2, LOW);

    digitalWrite(blueLED3, HIGH);

    digitalWrite(redLED1, LOW);

    digitalWrite(redLED2, LOW);

    digitalWrite(redLED3, LOW);

    digitalWrite(greenLED, LOW);

    lcd.setCursor(0, 1);

  lcd.print('type');

    

  }

  

   if (temperatureC > -10 && temperatureC < 30 ) //lights one green LED

  { 

    digitalWrite(blueLED1, LOW);

    digitalWrite(blueLED2, LOW);

    digitalWrite(blueLED3, LOW);

    digitalWrite(redLED1, LOW);

    digitalWrite(redLED2, LOW);

    digitalWrite(redLED3, LOW);

    digitalWrite(greenLED, HIGH);

   

    

  }

 

  if (temperatureC > 30 && temperatureC < 35 ) //lights one red LEDs

  { 

    digitalWrite(blueLED1, LOW);

    digitalWrite(blueLED2, LOW);

    digitalWrite(blueLED3, LOW);

    digitalWrite(redLED1, HIGH);

    digitalWrite(redLED2, LOW);

    digitalWrite(redLED3, LOW);

    digitalWrite(greenLED, LOW);

    lcd.setCursor(0, 1);

  lcd.print(millis() / 1000);

    

  }

  if (temperatureC > 35 && temperatureC < 40 ) //lights two red LEDs

  { 

    digitalWrite(blueLED1, LOW);

    digitalWrite(blueLED2, LOW);

    digitalWrite(blueLED3, LOW);

    digitalWrite(redLED1, HIGH);

    digitalWrite(redLED2, HIGH);

    digitalWrite(redLED3, LOW);

    digitalWrite(greenLED, LOW);

    

  }

 

  if (temperatureC > 40 ) //lights three red LEDs

  { 

 

    digitalWrite(blueLED1, LOW);

    digitalWrite(blueLED2, LOW);

    digitalWrite(blueLED3, LOW);

    digitalWrite(redLED1, HIGH);

    digitalWrite(redLED2, HIGH);

    digitalWrite(redLED3, HIGH);

    digitalWrite(greenLED, LOW);

    tone(piezo, 1000, 500);

    delay(piezodelay);

    

  }

 

 

  Serial.print(temperatureC);

  Serial.println(voltage);

 

}
