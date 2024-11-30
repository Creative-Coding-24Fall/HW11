int ledPins[] = {2, 3, 4, 5, 6, 7}; 
int numLEDs = 6;                    
int delayTime = 10000;              

void setup() {
  for (int i = 0; i < numLEDs; i++) {     
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);        
  }
}

void loop() {
  // Turn on LEDs one by one
  for (int i = 0; i < numLEDs; i++) { 
    digitalWrite(ledPins[i], HIGH);       
    delay(delayTime);                     
  }

  // Turn off all 
  for (int i = 0; i < numLEDs; i++) { 
    digitalWrite(ledPins[i], LOW);        
  }

}