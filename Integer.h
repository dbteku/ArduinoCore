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
	Integer(const Integer& ref) {
		value = int(ref.value);
	}
	~Integer() {

	}

	bool operator == (const Integer& ref) const
	{
		bool areEqual = false;
		const Integer* me = this;
		areEqual = me == &ref || value == ref.value;
		return areEqual;
	}

	virtual bool equals(const Integer& ref) {
		Integer* me = this;
		return me == &ref || value == ref.value;
	}

	Integer& operator+(const Integer& ref)
	{
		int* newValue = new int(value + ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Integer& operator-(const Integer& ref)
	{
		int* newValue = new int(value - ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Integer& operator*(const Integer& ref)
	{
		int* newValue = new int(value * ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Integer& operator/(const Integer& ref)
	{
		int* newValue = new int(value / ref.value);
		value = *newValue;
		delete newValue;
		return *this;
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
		int* newValue = new int(value + ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Integer& operator-=(const Integer& ref)
	{
		int* newValue = new int(value - ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Integer& operator*=(const Integer& ref)
	{
		int* newValue = new int(value * ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Integer& operator/=(const Integer& ref)
	{
		int* newValue = new int(value / ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	int& getValue() {
		return value;
	}

	String toString() {
		String string = String(value);
		return string;
	}

};