# include < Wire .h >
# include < LiquidCrystal_I2C .h >
# include Wire . h
// initialize the liquid crystal library
// the first parameter is the I2C address
// the second parameter is how many rows are on your
// screen the third parameter is how many columns are
// on your screen LiquidCrystal_I2C lcd (0 x27 , 16 , 2);
void setup () {
// initialize lcd screen
lcd . init ();
// turn on the backlight
lcd . backlight ();
}
void loop () {
// wait for a second
delay (1000);
// tell the screen to write on the top row
lcd . setCursor (0 ,0);
// tell the screen to write hello , f r o m on
// the top row
lcd . print ( ’ Hello , ␣ From ’ );
// tell the screen to write on the bottom row
lcd . setCursor (0 ,1);
// tell the screen to write Arduino_uno_guy
Chapter 4. Implementation 27
// on the bottom row you can change whats in the
// quotes to be what you want it to be !
lcd . print ( ’ Arduino_uno_gu ’ );
}
