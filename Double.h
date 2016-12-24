#ifndef Object_h
#define Object_h
#include <Object.h>
#endif

class Double : public Object {
private:
	double value;

	String getName() {
		return F("Double");
	}
public:
	Double() {
		value = double(0);
	}
	Double(double value) {
		value = double(value);
	}
	Double(float value) {
		value = double(value);
	}
	Double(short value) {
		value = double(value);
	}
	~Double() {

	}

	bool operator == (const Double& ref) const
	{
		bool areEqual = false;
		const Double* me = this;
		areEqual = me == &ref || value == ref.value;
		return areEqual;
	}

	virtual bool equals(const Double& ref) {
		Double* me = this;
		return me == &ref || value == ref.value;
	}

	Double& operator+(const Double& ref)
	{
		double* newValue = new double(value + ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Double& operator-(const Double& ref)
	{
		double* newValue = new double(value - ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Double& operator*(const Double& ref)
	{
		double* newValue = new double(value * ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Double& operator/(const Double& ref)
	{
		double* newValue = new double(value / ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Double& operator++()
	{
		value++;
		return *this;
	}

	Double& operator--()
	{
		value--;
		return *this;
	}

	Double& operator+=(const Double& ref)
	{
		double* newValue = new double(value + ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Double& operator-=(const Double& ref)
	{
		double* newValue = new double(value - ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Double& operator*=(const Double& ref)
	{
		double* newValue = new double(value * ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Double& operator/=(const Double& ref)
	{
		double* newValue = new double(value / ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	double& getValue() {
		return value;
	}

	String toString() {
		String string = String(value);
		return string;
	}

};