#include <Servo.h>

Servo servo_port_OUT2;

void setup()
{
  pinMode( IN2 , INPUT);
  pinMode( IN1 , INPUT);
  servo_port_OUT2.attach(OUT2, BIG_SERVO);
  servo_port_OUT2.write( 90 );
  tone(OUT1, 440, 500);
  builtInRGB(RED);
  delay( 1000 );
  tone(OUT1, 440, 500);
  builtInRGB(WHITE);
  delay( 1000 );
  tone(OUT1, 440, 500);
  builtInRGB(GREEN);
  delay( 1000 );
  tone(OUT1, 1000, 1000);
}

void loop()
{
  builtInRGB(OFF);
  servo_port_OUT2.write( 90 );
  if (buttonRead(IN1))
  {
    builtInRGB(BLUE);
    servo_port_OUT2.write( 180 );
    delay( 2000 );
    stopProgram();
  }
  if (buttonRead(IN2))
  {
    builtInRGB(BLUE);
    servo_port_OUT2.write( 0 );
    delay( 2000 );
    stopProgram();
  }
}

