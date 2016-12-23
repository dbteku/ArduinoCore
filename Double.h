#ifndef Object_h
#define Object_h
#include <Object.h>
#endif

class Double : public Object {
private:
	double* value;

	String getName() {
		return "Double";
	}
public:
	Double() {
		value = new double(0);
	}
	Double(double value) {
		this->value = new double(value);
	}
	Double(float value) {
		this->value = new double(value);
	}
	Double(int value) {
		this->value = new double(value);
	}
	Double(short value) {
		this->value = new double(value);
	}
	~Double() {
		delete value;
	}

	bool operator == (const Double& ref) const
	{
		bool areEqual = false;
		const Double* me = this;
		areEqual = me == &ref || *value == *ref.value;
		return areEqual;
	}

	virtual bool equals(const Double& ref) {
		Double* me = this;
		return me == &ref || *value == *ref.value;
	}

	Double& operator+(const Double& ref)
	{
		double* newValue = new double(*value + *ref.value);
		Double* newValueObject = new Double(*newValue);

		return *newValueObject;
	}

	Double& operator-(const Double& ref)
	{
		double* newValue = new double(*value - *ref.value);
		Double* newValueObject = new Double(*newValue);

		return *newValueObject;
	}

	Double& operator *(const Double& ref)
	{
		double* newValue = new double(*value * *ref.value);
		Double* newValueObject = new Double(*newValue);

		return *newValueObject;
	}

	Double& operator /(const Double& ref)
	{
		double* newValue = new double(*value - *ref.value);
		Double* newValueObject = new Double(*newValue);

		return *newValueObject;
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
		double* newValue = new double(*value + *ref.value);
		Double* newValueObject = new Double(*newValue);

		return *newValueObject;
	}

	Double& operator*=(const Double& ref)
	{
		double* newValue = new double(*value * *ref.value);
		Double* newValueObject = new Double(*newValue);

		return *newValueObject;
	}

	Double& operator/=(const Double& ref)
	{
		double* newValue = new double(*value / *ref.value);
		Double* newValueObject = new Double(*newValue);

		return *newValueObject;
	}

	Double& operator-=(const Double& ref)
	{
		int* newValue = new int(*value - *ref.value);
		Double* newValueObject = new Double(*newValue);

		return *newValueObject;
	}

	double& getValue() {
		return *value;
	}

	String toString() {
		String string = String(*value);
		return string;
	}

};