
unsigned long prevTime= 0;
const long interval= 500;
int led= LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  unsigned long currentTime= millis();

  if (currentTime- prevTime>= interval){
    prevTime= currentTime;

    if (led==LOW){
      led=HIGH;
    } else {led =LOW;}

    digitalWrite(LED_BUILTIN,led);
    
  }
  
  
}
