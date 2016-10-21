In this project a GPIO pin is used as an output pin. Pin PA9 and the Blue LED follow each other.

The project sets up an ISR for the pin PA0. Upon detecting the rising edge, the green LED is toggled (on/off). As it turns out, PA0 is
connected to the Blue pushbutton on the Discovery board. Thus, pressing the blue push button toggles the state of the green LED.

We can also connect PA9 and PA0 so that the green LED turns on/off as controlled by PA9.
