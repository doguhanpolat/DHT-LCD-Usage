# DHT-LCD-Usage
Usage of Temperature and Humidity sensor with LCD I2C display


### ABOUT THIS PROJECT
I have used Arduino UNO for this project. You can use other cards.

**NOTE:** If you use another board, you may need to relocate the "SDA, SCL" pins. You can find out by looking at the data sheet of the card you are using.

**First, make the connection of the DHT sensor with the Arduino board.**

>VCC - 5V

>DATA - PIN 4 (you can also use pins 3, 4, 5, 12, 13)

>GND - GND

**LCD connections with Arduino board**

>VCC - 5V

>GND - GND

>SDA - A4(Analog Pin 4)

>SCL - A5(Analog Pin 5)

**If you have connected the connections correctly it will look like this.**

<img src="https://user-images.githubusercontent.com/109466846/198622300-83b94c0e-4acc-432d-85aa-7c8837b4bf6e.png" width="600" height="325" />

Red Wires indicate the VCC wires and the black ones indicate GND wires.

NOTE- If you see that your sensor is rapidly getting warm(only for 4 pin sensors) then attach a 10K pull up resistor joining VCC and Signal ends of the sensor.

## Installing Libraries
**DHT**

Open your `Arduino IDE` and go to `Sketch > Include Library > Manage Libraries.` The Library Manager should open.
Search for `DHT` on the Search box and install the DHT library from Adafruit.

<img src="https://user-images.githubusercontent.com/109466846/198626883-d1c5c0ab-5f22-4bc8-8d5f-27aec9e7c883.png" width="600" height="350" />

**LCD I2C**

Open your `Arduino IDE` and go to `Sketch > Include Library > Manage Libraries.` The Library Manager should open.
Search for `LiquidCrystal I2C` on the Search box and install the LCD I2C.

<img src="https://user-images.githubusercontent.com/109466846/198632690-ddf1bd27-3f7f-4c83-a819-5d9decd9a485.png" width="600" height="350" />

## Demonstration

<img src="https://user-images.githubusercontent.com/109466846/198638376-0854f354-8be3-4c77-9b0d-401cd2785f10.mp4" width="600" height="350" />

## LCD Failed 

If you don't see any text on the LCD, try this. 

*Before*

<img src="https://user-images.githubusercontent.com/109466846/198660824-311e3914-dfc7-48f0-8204-910e7819b38b.png" width="400" height="25" />

*After*

<img src="https://user-images.githubusercontent.com/109466846/198659910-0b98e323-0425-4721-8395-e616f0f35db7.png" width="400" height="25" />


