#ifndef Object_h
#define Object_h
#include <Object.h>
#endif

class Float : public Object {
private:
	float value;

	String getName() {
		return F("Float");
	}
public:
	Float() {
		value = float(0);
	}
	Float(float value) {
		this->value = float(value);
	}
	Float(int value) {
		this->value = float(value);
	}
	Float(short value) {
		this->value = float(value);
	}
	~Float() {

	}

	bool operator == (const Float& ref) const
	{
		bool areEqual = false;
		const Float* me = this;
		areEqual = me == &ref || value == ref.value;
		return areEqual;
	}

	virtual bool equals(const Float& ref) {
		Float* me = this;
		return me == &ref || value == ref.value;
	}

	Float& operator+(const Float& ref)
	{
		float* newValue = new float(value + ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Float& operator-(const Float& ref)
	{
		float* newValue = new float(value - ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Float& operator*(const Float& ref)
	{
		float* newValue = new float(value * ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Float& operator/(const Float& ref)
	{
		float* newValue = new float(value / ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Float& operator++()
	{
		value++;
		return *this;
	}

	Float& operator--()
	{
		value--;
		return *this;
	}

	Float& operator+=(const Float& ref)
	{
		float* newValue = new float(value + ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Float& operator-=(const Float& ref)
	{
		float* newValue = new float(value - ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Float& operator*=(const Float& ref)
	{
		float* newValue = new float(value * ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Float& operator/=(const Float& ref)
	{
		float* newValue = new float(value / ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	float& getValue() {
		return value;
	}

	String toString() {
		String string = String(value);
		return string;
	}

};