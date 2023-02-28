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
	int i = 0;

	while (i < len)
	{
		char	buf[2] = {str[i], 0};
		sevseg.setChars(buf);
		delay(1000);
		sevseg.refreshDisplay();
		i++;
	}
}
