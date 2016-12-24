// Make sure you have the library imported correctly.
#include <ArrayList.h>
#include <Integer.h>
#include <Float.h>

void setup() {
	Serial.begin(9600);
	Integer stackAvg = stackAverage();
	Serial.print(F("Stack Average: "));
	Serial.println(stackAvg.getValue());
	Float heapAvg = heapAverage();
	Serial.print(F("Heap Average: "));
	Serial.println(heapAvg.getValue());
}

// Stack Average Example
Integer stackAverage() {
	// Average of the numbers 1-5. Should be 3
	// Make ArrayList
	ArrayList<Integer> integers = ArrayList<Integer>();
	// Add Numbers 1-5;
	for (int i = 1; i <= 5; i++)
	{
		integers.add(Integer(i));
	}
	// Creates a new Integer to store sum in;
	Integer sum = Integer(); // Default set to 0 with no paramaters.
	// Add all integers up.
	for (int i = 0; i < 5; i++)
	{
		sum += integers.get(i);
	}
	// Make average integer to store average result.
	Integer average = Integer();
	// Devide by quantity of numbers;
	average = sum / integers.count();
	return average;
}

// Heap Average Example
Float heapAverage() {
	// Average of the numbers 1-100. Should be 50.50
	// Make ArrayList
	ArrayList<Float>* numbers = new ArrayList<Float>();
	// Add Numbers 1-100;
	for (float i = 1; i <= 100; i++)
	{
		numbers->add(Float(i));
	}
	// Creates a new Float to store sum in;
	Float sum = Float(); // Default set to 0 with no paramaters.
							 // Add all floats up.
	for (int i = 0; i < 100; i++)
	{
		sum += numbers->get(i);
	}
	// Make average Float to store average result.
	Float average = Float();
	// Devide by quantity of numbers;
	average = sum / numbers->count();
	delete numbers;
	return average;
}

void loop() {

}
