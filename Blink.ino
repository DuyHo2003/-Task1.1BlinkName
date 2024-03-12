// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
 void loop () {
    letterD();
    letterA();
    letterV();
    letterE();
  }

  void letterD () {
    digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(3000);                      // wait for 3 seconds
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
    delay(1000);   
    digitalWrite(LED_BUILTIN, HIGH);   
    delay(1000);           
    digitalWrite(LED_BUILTIN, LOW);   
    delay(1000);             
    digitalWrite(LED_BUILTIN, HIGH);   
    delay(1000); 
  }

  void letterA () {
    digitalWrite(LED_BUILTIN, HIGH);   
    delay(1000); 
    digitalWrite(LED_BUILTIN, LOW);   
    delay(1000); 
    digitalWrite(LED_BUILTIN, HIGH);   
    delay(3000); 
  }

  void letterV () {
    digitalWrite(LED_BUILTIN, HIGH);   
    delay(1000); 
    digitalWrite(LED_BUILTIN, LOW);   
    delay(1000); 
    digitalWrite(LED_BUILTIN, HIGH);   
    delay(1000); 
    digitalWrite(LED_BUILTIN, LOW);   
    delay(1000); 
    digitalWrite(LED_BUILTIN, HIGH);   
    delay(1000); 
    digitalWrite(LED_BUILTIN, LOW);   
    delay(1000); 
    digitalWrite(LED_BUILTIN, HIGH);   
    delay(3000); 
  }

  void letterE () {
    digitalWrite(LED_BUILTIN, HIGH);   
    delay(1000); 
  }

 
