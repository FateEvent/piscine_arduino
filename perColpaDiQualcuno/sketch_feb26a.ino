#include "SevSeg.h"

SevSeg	sevseg;
//char	*str = "We are such stuff As dreams are made on, and our little life Is rounded with a sleep.";
char	*str = "Per colpa di qualcuno non si fa credito a nessuno.";
int		len = strlen(str);

void setup(){
	byte	numDigits = 1;
	byte	digitPins[] = {};
	byte	segmentPins[] = {6, 5, 2, 3, 4, 7, 8, 9};
	bool	resistorsOnSegments = true;
	byte	hardwareConfig = COMMON_CATHODE;
 
	sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
	sevseg.setBrightness(90);
}

void loop() {
	for (int i = 0; i < len; i++)
	{
		char buf [2];
		buf [0] = str[i];
		buf [1] = 0;  // null terminator
		sevseg.setChars(buf);
		sevseg.refreshDisplay();
		delay(1000);
	}
}
