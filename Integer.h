#ifndef Object_h
#define Object_h
#include <Object.h>
#endif

class Integer : public Object {
private:
	int value;

	String getName() {
		return F("Integer");
	}
public:
	Integer() : Object() {
		value = 0;
	}
	Integer(int value) : Object() {
		this->value = value;
	}
	Integer(short value) : Object() {
		this->value = int(value);
	}
	~Integer() {

	}

	virtual bool operator == (const Integer& ref) const
	{
		bool areEqual;
		const Integer* me = this;
		areEqual = value == ref.value;
		return areEqual;
	}

	virtual bool equals(const Integer& ref) {
		Integer* me = this;
		return value == ref.value;
	}

	Integer operator+(const Integer& ref)
	{
		int newValue = value + ref.value;
		return Integer(newValue);
	}

	Integer operator-(const Integer& ref)
	{
		int newValue = value - ref.value;
		return Integer(newValue);
	}

	Integer operator*(const Integer& ref)
	{
		int newValue = value * ref.value;
		return Integer(newValue);
	}

	Integer operator/(const Integer& ref)
	{
		int newValue = value / ref.value;
		return Integer(newValue);
	}

	Integer& operator++()
	{
		value++;
		return *this;
	}

	Integer& operator--()
	{
		value--;
		return *this;
	}

	Integer& operator+=(const Integer& ref)
	{                      
		int newValue = value + ref.value;
		value = Integer(newValue).getValue();
		return *this;
	}

	Integer& operator-=(const Integer& ref)
	{
		int newValue = value - ref.value;
		value = Integer(newValue).getValue();
		return *this;
	}

	Integer& operator*=(const Integer& ref)
	{
		int newValue = value * ref.value;
		value = Integer(newValue).getValue();
		return *this;
	}

	Integer& operator/=(const Integer& ref)
	{
		int newValue = value / ref.value;
		value = Integer(newValue).getValue();
		return *this;
	}

	bool operator>=(const Integer& ref)
	{
		return value >= ref.value;
	}

	bool operator >(const Integer& ref)
	{
		return value > ref.value;
	}

	bool operator <(const Integer& ref)
	{
		return value < ref.value;
	}

	bool operator<=(const Integer& ref)
	{
		return value <= ref.value;
	}

	int& getValue() {
		return value;
	}

	virtual String toString() {
		String string = String(value);
		return string;
	}

};