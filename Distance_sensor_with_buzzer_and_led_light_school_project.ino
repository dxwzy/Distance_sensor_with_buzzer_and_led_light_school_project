int echo = 8; // The echo recieves
int trigger = 5; // The trigger sends
int time; 
int buzzer = 13; 
int distance; 
int led = 4;
int value;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(trigger, OUTPUT);
pinMode(echo, INPUT);
pinMode(buzzer, OUTPUT);
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigger,HIGH);
delayMicroseconds(10);
digitalWrite(trigger,LOW);
time = pulseIn(echo,HIGH);
distance = (time*0.034)/2;

if(distance <= 10){ 
  Serial.println("Landscape with the Fall of Icarus William Carlos Williams - 1883-1963 According to Brueghel when Icarus fell it was spring a farmer was ploughing his field the whole pageantry of the year was awake tingling near the edge of the sea concerned with itself sweating in the sun that melted the wings' wax unsignificantly off the coast there was a splash quite unnoticed this was Icarus drowning");
  Serial.print("Distance =");
  Serial.print(distance);
  Serial.println("cm");
  digitalWrite(buzzer,HIGH);
  delay(500);
  digitalWrite(led,1);
    }
  
else {
  Serial.println("Door Closed");
  Serial.print("Distance =");
  Serial.print(distance);
  Serial.print("cm\n");
  digitalWrite(buzzer,LOW);
  delay(500);
  digitalWrite(led,0);
}
}
