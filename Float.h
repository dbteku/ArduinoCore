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

	virtual bool operator == (const Float& ref) const
	{
		bool areEqual;
		const Float* me = this;
		areEqual = value == ref.value;
		return areEqual;
	}

	virtual bool equals(const Float& ref) {
		Float* me = this;
		return value == ref.value;
	}

	Float& operator+(const Float& ref)
	{
		float newValue = value + ref.value;
		return Float(newValue);
	}

	Float& operator-(const Float& ref)
	{
		float newValue = value - ref.value;
		return Float(newValue);
	}

	Float& operator*(const Float& ref)
	{
		float newValue = value * ref.value;
		return Float(newValue);
	}

	Float& operator/(const Float& ref)
	{
		float newValue = value / ref.value;
		return Float(newValue);
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
		float newValue = value + ref.value;
		value = Float(newValue).getValue();
		return *this;
	}

	Float& operator-=(const Float& ref)
	{
		float newValue = value - ref.value;
		value = Float(newValue).getValue();
		return *this;
	}

	Float& operator*=(const Float& ref)
	{
		float newValue = value * ref.value;
		value = Float(newValue).getValue();
		return *this;
	}

	Float& operator/=(const Float& ref)
	{
		float newValue = value / ref.value;
		value = Float(newValue).getValue();
		return *this;
	}

	float& getValue() {
		return value;
	}

	virtual String toString() {
		String string = String(value);
		return string;
	}

};