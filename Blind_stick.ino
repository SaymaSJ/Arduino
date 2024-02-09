#define trigPIN 11

#define echoPin 12

#define motor 7

#define buzzer 6

void setup()
{
pinMode(trigPIN , OUTPUT);

pinMode(echoPin, INPUT);

pinMode(motor, OUTPUT);

pinMode(buzzer,OUTPUT);

}

void loop()

{

long duration, distance;

digitalWrite(trigPIN, LOW); 

delayMicroseconds(2); 

digitalWrite(trigPIN, HIGH);

delayMicroseconds(10); 

digitalWrite(trigPIN, LOW);

duration = pulseIn(echoPin, HIGH);

distance = (duration/2) / 29.1;

if (distance < 70)// This is where checking the distanceyou can change the value

{ 

digitalWrite(motor,HIGH); // When the the distance below 100cm

digitalWrite(buzzer,HIGH);

} else

{

digitalWrite(motor,LOW);// when greater than 100cm

digitalWrite(buzzer,LOW); 

} delay(500);

}

