const int trigPin = 13;
const int echoPin = 12;
const int in2 = 10;
const int in7 = 9;
const int in10 = 6;
const int in15 = 5;

void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(in2, OUTPUT);
  pinMode(in7, OUTPUT);
  pinMode(in10, OUTPUT);
  pinMode(in15, OUTPUT);
}
long duration, distance;

void loop()
{     
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  
  duration = pulseIn(echoPin, HIGH);
  distance = duration/58.2;
  if(distance < 30)
    {
      digitalWrite(in2, HIGH); 
      digitalWrite(in7, LOW); 
      digitalWrite(in10, LOW); 
      digitalWrite(in15, LOW);
      delay(500);     // turns left for 0.5 sec- only right wheel moves
    }
    
  else
    {
      digitalWrite(in2, HIGH); 
      digitalWrite(in7, LOW); 
      digitalWrite(in10, HIGH); 
      digitalWrite(in15, LOW);
      delay(2000);    // goes straight - both wheels move
    }  
delay(1000);
}

