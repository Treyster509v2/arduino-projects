
int led = 9;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by
int dly = 50;

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);  
}

// the loop routine runs over and over again forever:

void loop() {
 
  fadeloop(9, 0, 5, 30, 1);
   fadeloop(6, 0, 5, 30, 1);
}

void fadeloop(int led, int bright, int fade, int thedelay, int loops){
 int count = 0;
  while(count < ((255/fade)*4) ){
      analogWrite(led, bright);
      bright = bright + fade;
      if (bright <= 0 || bright >= 255)fade = -fade; // bright = bright * -1;
      delay(thedelay);
      Serial.print("bright = ");
      Serial.print(bright);
      Serial.print(" fade = ");
      Serial.print(fade);
      Serial.print(" count = ");
      Serial.println(count);
      count++;
  }
  analogWrite(led, 0);
}








