#include <pt.h>
/*
 * author aliseylaneh@gmail.com
 */
static struct pt pt1,pt2;
const int buttonPin=7,ledPin=13;
const int speedList[4]={500,300,100,50};
int counter=0;
static int ledBlink(struct pt *pt)
{
  static unsigned long lastTimeBlink = 0;
  PT_BEGIN(pt);
  while(1) {
    lastTimeBlink = millis();
    PT_WAIT_UNTIL(pt, millis() - lastTimeBlink > speedList[counter]);
    digitalWrite(ledPin,HIGH);
    lastTimeBlink = millis();
    PT_WAIT_UNTIL(pt, millis() - lastTimeBlink > speedList[counter]);
    digitalWrite(ledPin,LOW);
  }
  PT_END(pt);
}
static int buttonClick(struct pt *pt)
{ 
  PT_BEGIN(pt);
  while(1){
     PT_WAIT_UNTIL(pt, digitalRead(buttonPin) == HIGH);
     if(counter==3)
      counter=0;
     else
      counter++;
     PT_WAIT_UNTIL(pt, digitalRead(buttonPin) == LOW);
   
  PT_END(pt);
 }
}
void setup() {
  pinMode(buttonPin,INPUT);
  pinMode(ledPin,OUTPUT);
  PT_INIT(&pt2);
  PT_INIT(&pt1);
}
void loop() {
  ledBlink(&pt1);
  buttonClick(&pt2);
}
