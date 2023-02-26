#include "SevSeg.h"

SevSeg  sevseg;
char    str[] = "Per colpa di qualcuno non si fa credito a nessuno";
int     len = 49;



void setup(){
    byte numDigits = 1;
    byte digitPins[] = {};
    byte segmentPins[] = {6, 5, 2, 3, 4, 7, 8, 9};
    bool resistorsOnSegments = true;

    byte hardwareConfig = COMMON_CATHODE; 
    sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
    sevseg.setBrightness(90);
}

void loop(){
  int i = 0;

  while (i < len)
  {
    sevseg.setChars(&(str[i]));
    delay(1000);
    sevseg.refreshDisplay();
    ++i;
  }
}
