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
		this->value = double(0);
	}
	Double(double value) {
		this->value = double(value);
	}
	Double(float value) {
		this->value = double(value);
	}
	Double(short value) {
		this->value = double(value);
	}
	Double(int value) {
		this->value = double(value);
	}
	~Double() {

	}

	virtual bool operator == (const Double& ref) const
	{
		bool areEqual;
		const Double* me = this;
		areEqual = value == ref.value;
		return areEqual;
	}

	virtual bool equals(const Double& ref) {
		Double* me = this;
		return value == ref.value;
	}

	Double operator+(const Double& ref)
	{
		double newValue = value + ref.value;
		return Double(newValue);
	}

	Double operator-(const Double& ref)
	{
		double newValue = value - ref.value;
		return Double(newValue);
	}

	Double operator*(const Double& ref)
	{
		double newValue = value * ref.value;
		return Double(newValue);
	}

	Double operator/(const Double& ref)
	{
		double newValue = value / ref.value;
		return Double(newValue);
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
		double newValue = value + ref.value;
		value = Double(newValue).getValue();
		return *this;
	}

	Double& operator-=(const Double& ref)
	{
		double newValue = value - ref.value;
		value = Double(newValue).getValue();
		return *this;
	}

	Double& operator*=(const Double& ref)
	{
		double newValue = value * ref.value;
		value = Double(newValue).getValue();
		return *this;
	}

	Double& operator/=(const Double& ref)
	{
		double newValue = value / ref.value;
		value = Double(newValue).getValue();
		return *this;
	}

	bool operator>=(const Double& ref)
	{
		return value >= ref.value;
	}

	bool operator >(const Double& ref)
	{
		return value > ref.value;
	}

	bool operator <(const Double& ref)
	{
		return value < ref.value;
	}

	bool operator<=(const Double& ref)
	{
		return value <= ref.value;
	}

	double& getValue() {
		return value;
	}

	virtual String toString() {
		String string = String(value);
		return string;
	}

};