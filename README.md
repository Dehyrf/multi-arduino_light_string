#
 multi-arduino_light_string
Program for multiple arduinos (prefferably unos) with led's on digital 
pins 1-12 to create indefinitely long scrolling light arrays

Directions: Upload code to two or more arduinos, connect the port 13 of one to 0 of the next for all in a string, attach leds to ports 1-12 on all but the first arduino in the strng, boot up the first (the one without leds) and wait 5-7 seconds then boot up the next, wait 5-7 seconds (and repeat down the line), and enjoy!

Hint: You can change the speed of the light moving down the arduinos by changing the changeme_blinkInterval value.
