/*
 * Vibrate
 * Turns on the vibe board for one second then off for one second, repeatedly.
 */

 int vibe = ?;            // vibe pin is attached to ? on dev board

 void setup() {           // NECESSARY PART OF CODE runs once
  pinMode(vibe, OUTPUT):  // sets vibeas an OUTPUT
 }

 void loop() {                // NECESSARY PART OF CODE repeats over and over
   digitalWrite(vibe, HIGH);  // turns vibe ON
   delay(1000);               // waits 1 second or 1000 milliseconds
   digitalWrite(vibe, LOW);   // turns vibe OFF
   delay(1000);               // waits 1 second or 1000 milliseconds
 }