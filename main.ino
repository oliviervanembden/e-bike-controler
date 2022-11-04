const byte paddle = 2; // pin of peddel hall sesnor
const byte wheel = 3; // pin if wheel hall sensor
const byte out = 10; // pin of relais
const int maxPaddle = 3000; // max time between paddle triggers
const int minWheel = 1000; // min time between wheel triggers
unsigned long paddleTime, wheelTime; // unsigned long to store time of last triggers

void setup() { // runs once
  pinMode(out, OUTPUT); // sets pin of relais as output
  pinMode(paddle, INPUT); // set paddle pin as input 
  pinMode(wheel, INPUT); // set wheel pin as input
  attachInterrupt(digitalPinToInterrupt(paddle), trigPaddle, CHANGE); // attaches interrupt to paddle pin
  attachInterrupt(digitalPinToInterrupt(wheel), trigwheel, CHANGE); // attaches interrut to wheel pin
  digitalWrite(out, LOW); // turns relay of on start

}

void trigPaddle(){ // runs when trigger pin gets HIGH
  paddleTime = millis(); // sets current time as last trigger time

}
void trigwheel(){ // runs when wheen pin gets HIGH
  wheelTime = millis(); // sets current time as last trigger time
}

void loop() { // runs continuously
  if (millis()-paddleTime <= maxPaddle && millis()-wheelTime >= minWheel){ // checks if time are to big/small
    digitalWrite(out, HIGH); // turns relay on 

  }else{ // one of the limits are exceeded
    digitalWrite(out, LOW); // turn of relay
}
}
