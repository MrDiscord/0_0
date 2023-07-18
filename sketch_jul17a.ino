#include <Display.h>

Display display(UART1);

void setup()
{
}

void loop()
{
  display.clear();
  display.text(0, 0, 2, WHITE, "I Robot!");	
  delay( 1000 );
  display.clear();
  display.text(0, 0, 2, GREEN, "Motor Start");
  display.circleFilled(160, 120, 50, BLUE);	
  delay( 1000 );
  startMotor(4, 100);
  delay( 3000 );
  display.clear();
  display.text(0, 0, 2, RED, "Motor Stop");	
  delay( 1000 );
  stopMotor(4);
}

