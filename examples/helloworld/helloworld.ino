#include <Nokia5110.h>
Nokia5110 lcd;

void setup()
{
  // put your setup code here, to run once:
  lcd.init();
  lcd.printf(0,0,"hello");
  lcd.printf(40,1,"world!");
  lcd.printf(0,lcd.max_y,"PI=%d.%d",F2D(3.1415));
}

void loop()
{
  // put your main code here, to run repeatedly:
}
