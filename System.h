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

	static void startSerial() {
		//if (BAUD_RATE) {
		//	Serial.end();
		//}
		Serial.begin(BAUD_RATE);
	}

	static String readInput() {
		String input = F("");
		if (BAUD_RATE) {
			while (Serial.available() == 0) {
			}
			input = Serial.readString();
		}
		return input;
	}

	static void print(String toPrint) {
		if (BAUD_RATE) {
			Serial.print(toPrint);
		}
	}

	static void println(String toPrint) {
		if (BAUD_RATE) {
			Serial.println(toPrint);
		}
	}
};

int System::BAUD_RATE = 9600;