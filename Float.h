#ifndef Object_h
#define Object_h
#include <Object.h>
#endif

class Float : public Object {
private:
	float* value;

	String getName() {
		return "Float";
	}
public:
	Float() {
		value = new float(0);
	}
	Float(float value) {
		this->value = new float(value);
	}
	Float(short value) {
		this->value = new float(value);
	}
	Float(int value) {
		this->value = new float(value);
	}
	~Float() {
		delete value;
	}

	bool operator == (const Float& ref) const
	{
		bool areEqual = false;
		const Float* me = this;
		areEqual = me == &ref || *value == *ref.value;
		return areEqual;
	}

	virtual bool equals(const Float& ref) {
		Float* me = this;
		return me == &ref || *value == *ref.value;
	}

	Float& operator+(const Float& ref)
	{
		float* newValue = new float(*value + *ref.value);
		Float* newValueObject = new Float(*newValue);

		return *newValueObject;
	}

	Float& operator-(const Float& ref)
	{
		float* newValue = new float(*value - *ref.value);
		Float* newValueObject = new Float(*newValue);

		return *newValueObject;
	}

	Float& operator *(const Float& ref)
	{
		float* newValue = new float(*value * *ref.value);
		Float* newValueObject = new Float(*newValue);

		return *newValueObject;
	}

	Float& operator /(const Float& ref)
	{
		float* newValue = new float(*value - *ref.value);
		Float* newValueObject = new Float(*newValue);

		return *newValueObject;
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
		float* newValue = new float(*value + *ref.value);
		value = newValue;
		return *this;
	}

	Float& operator*=(const Float& ref)
	{
		float* newValue = new float(*value * *ref.value);
		value = newValue;
		return *this;
	}

	Float& operator/=(const Float& ref)
	{
		float* newValue = new float(*value / *ref.value);
		value = newValue;
		return *this;
	}

	Float& operator-=(const Float& ref)
	{
		float* newValue = new float(*value - *ref.value);
		value = newValue;
		return *this;
	}
	float& getValue() {
		return *value;
	}

	String toString() {
		String string = String(*value);
		return string;
	}

};