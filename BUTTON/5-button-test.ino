/*

The Circuit:
 Most other analog buttons circuits call for the resistors to be
 lined up in series from ground. The analog pin and each button
 connect off one of the resistors. My cuicuit requires that the
 resistors tie in from +5 to the buttons. The buttons all connect
 to the analog pin which is tied to ground threw a 1k resistor as
 seen in the diagram below. 

        Analog pin 0
                  |
Ground-- 330 Ohm--|--------|--------|-------|-------|
                  |        |        |       |       |
                  btn1     btn2     btn3    btn4    btn5
                  |        |        |       |       |
                  330 Ohm  330 Ohm  330 Ohm  330 Ohm  330 Ohm
                  |--------|--------|-------|-------|-- +5V
           
modified by CWCcoleman
test 170122
left to right
Ground to 5v
5      4      3     2    1
200   253    337   508  1013

*/
int readButtons(int pin);

void setup()
{
 Serial.begin(9600); 
  pinMode(A0, INPUT_PULLUP); // sets analog pin for input 
}

int ButtonNumber = 0;
void loop()
{
   // Check for input
   ButtonNumber = readButtons(0);
   Serial.print("Button # ");
   Serial.println(ButtonNumber);
   //delay(500);
}


int readButtons(int A0pin)
// returns the button number pressed, or zero for none pressed 
// int pin is the analog pin number to read 
/*Ground to 5v
5      4      3     2    1
200   253    337   508  1013
*/
{
  int b,r = 0;  // b is button.  r is resistance
  r=analogRead(A0pin); // get the analog value from A0
 // Serial.println(r);
  //Serial.print("   ");
  if (r >1000)
  {
    b=1; // buttons have not been pressed
  }   
else
  if (r>480 && r< 520)
  {
    b=2; // button 1 pressed
  }     
  else
    if (r>320 && r<360)
    {
      b=3; // button 2 pressed
    }       
    else
      if (r>230 && r< 270)
      {
        b=4; // button 3 pressed
      }         
      else
        if (r>150 && r<220)
        {
          b=5; // button 4 pressed
        }           
        else
          if (r<20)
          {
            b=0; // button 5 pressed
          }
return b;
}


