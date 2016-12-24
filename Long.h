#ifndef Object_h
#define Object_h
#include <Object.h>
#endif

class Long : public Object {
private:
	long value;

	String getName() {
		return F("Long");
	}
public:
	Long() {
		value =  long(0);
	}
	Long(long value) {
		value = long(value);
	}
	Long(int value) {
		value = long(value);
	}
	Long(short value) {
		value = long(value);
	}
	~Long() {
	}

	bool operator == (const Long& ref) const
	{
		bool areEqual = false;
		const Long* me = this;
		areEqual = me == &ref || value == ref.value;
		return areEqual;
	}

	virtual bool equals(const Long& ref) {
		Long* me = this;
		return me == &ref || value == ref.value;
	}

	Long& operator+(const Long& ref)
	{
		long* newValue = new long(value + ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Long& operator-(const Long& ref)
	{
		long* newValue = new long(value - ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Long& operator*(const Long& ref)
	{
		long* newValue = new long(value * ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Long& operator/(const Long& ref)
	{
		long* newValue = new long(value / ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Long& operator++()
	{
		value++;
		return *this;
	}

	Long& operator--()
	{
		value--;
		return *this;
	}

	Long& operator+=(const Long& ref)
	{
		long* newValue = new long(value + ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Long& operator-=(const Long& ref)
	{
		long* newValue = new long(value - ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Long& operator*=(const Long& ref)
	{
		long* newValue = new long(value * ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Long& operator/=(const Long& ref)
	{
		long* newValue = new long(value / ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	long& getValue() {
		return value;
	}

	String toString() {
		String string = String(value);
		return string;
	}
};