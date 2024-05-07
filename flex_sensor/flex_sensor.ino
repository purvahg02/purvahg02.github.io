
#include "pitches.h"  

const int flexPin = A0; 
const int flexPin2 = A1; 
const int flexPin3 = A2;

int value; 
int value2; 
int value3;

void setup(){
  Serial.begin(9600);  // Begin serial communication
}

void loop(){
  value = analogRead(flexPin); 
  value2 = analogRead(flexPin2); 
  value3 = analogRead(flexPin3); 
  

  int mappedValue = map(value, 900, 1024, 0, 255); 
  
  int mappedValue2 = map(value2, 900, 1024, 0, 255); 
  
  int mappedValue3 = map(value3, 900, 1024, 0, 255); 

  String output = String(mappedValue) + "," + String(mappedValue2) + "," + String(mappedValue3);
  Serial.println(output); 


  if (mappedValue > 230) {  
    tone(3, NOTE_D4, 200); 
  }

  if (mappedValue2 > 230) {  
    tone(3, NOTE_C4, 200); 
  }

  if (mappedValue3 > 240) {  
   // tone(3, NOTE_D6, 200); 
  }

}
