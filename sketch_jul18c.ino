#include <Display.h>

Display display(UART1);

void setup()
{
  IRRC_setup(IN1, 3);


}

void loop()
{
  display.clear();
  display.text(0, 0, 2, BLUE, "Hello! I robot is console, and car! Ready?");
  builtInRGB(BLUE);
  builtInRGB(WHITE);
  delay( 5000 );
  display.clear();
  display.text(0, 0, 2, GREEN, "Console is ready!");
  while(true){
    if (RC(RIGHT_KEY))
    {
      startMotor(1, 50);
      startMotor(2, 50);
      startMotor(3, 50);
      startMotor(4, 50);
    }
    if (RC(LEFT_KEY))
    {
      startMotor(1, -50);
      startMotor(2, -50);
      startMotor(3, -50);
      startMotor(4, -50);
    }
    if (RC(OFF_KEY))
    {
      startMotor(1, 0);
      startMotor(2, 0);
      startMotor(3, 0);
      startMotor(4, 0);
    }
    if (RC(UP_KEY))
    {
      startMotor(1, 50);
      startMotor(2, -50);
      startMotor(3, 50);
      startMotor(4, -50);
    }
    if (RC(DOWN_KEY))
    {
      startMotor(1, -50);
      startMotor(2, 50);
      startMotor(3, -50);
      startMotor(4, 50);
    }
  }
}


