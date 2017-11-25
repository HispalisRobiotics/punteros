/* 
   
    Esto es mas interesante
    Emplea ANSI C
    Quitar ArduinoTrainer v1.0
    Requiere un conocimiento excepcional de los registros del ATMEGA328P

    Similar a HelloLED.ino pero usa LED 13 integrado en UNO
*/


void setup() 
{
  unsigned char *portDDRB;

  portDDRB = ( unsigned char *) 0x24;

  *portDDRB |= 0x20;
}

void loop() 
{
  unsigned char *portB;

  portB = ( unsigned char * ) 0x25;

  *portB |= 0x20;
  MyDelay( 1000 );

  *portB &= 0xDF;
  MyDelay( 1000 );
}


void MyDelay( unsigned long mSeconds )
{
  volatile unsigned long i;
  unsigned long endTime = 1000 * mSeconds;

  for( i=0 ; i<endTime ; i++ )
    ;
}

