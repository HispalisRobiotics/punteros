// No nos daran un premio de programacion por esto seguro

int led = 3;

void setup() 
{
  pinMode( led , OUTPUT );

}

void loop() 
{
  digitalWrite ( led , HIGH );
  delay(1000);
  digitalWrite ( led , LOW );
  delay(1000);
}
