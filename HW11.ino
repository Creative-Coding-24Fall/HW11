int ledPins[] = {2, 3, 4, 5, 6, 7}; 
int numLEDs = 6;                    
          
void setup() {
  for (int i = 0; i < numLEDs; i++) {     
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);        
  }
}

void loop() {
  // Turn on LEDs one by one

float num=millis()/10000%6;

for(int i=0;i<numLEDs;i++){
  digitalWrite(ledPins[i], LOW); 
}
for(int i=0;i<num+1;i++){
  digitalWrite(ledPins[i], HIGH); 
}
}