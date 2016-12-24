#ifndef Arduino_h
#define Arduino_h
#include <Arduino.h>
#endif

class System {
private:
	static int BAUD_RATE;

public:
	static void setBuadRate(int baudRate) {
		BAUD_RATE = baudRate;
	}

	static void start() {
		if (BAUD_RATE) {
			Serial.begin(BAUD_RATE);
		}
	}

};