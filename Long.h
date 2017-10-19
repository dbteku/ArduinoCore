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
		this->value = long(value);
	}
	Long(int value) {
		this->value = long(value);
	}
	Long(short value) {
		this->value = long(value);
	}
	~Long() {
	}

	virtual bool operator == (const Long& ref) const
	{
		bool areEqual;
		const Long* me = this;
		areEqual = value == ref.value;
		return areEqual;
	}

	virtual bool equals(const Long& ref) {
		Long* me = this;
		return value == ref.value;
	}

	Long operator+(const Long& ref)
	{
		long newValue = value + ref.value;
		return Long(newValue);
	}

	Long operator-(const Long& ref)
	{
		long newValue = value - ref.value;
		return Long(newValue);
	}

	Long operator*(const Long& ref)
	{
		long newValue = value * ref.value;
		return Long(newValue);
	}

	Long operator/(const Long& ref)
	{
		long newValue = value / ref.value;
		return Long(newValue);
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
		long newValue = value + ref.value;
		value = Long(newValue).getValue();
		return *this;
	}

	Long& operator-=(const Long& ref)
	{
		long newValue = value - ref.value;
		value = Long(newValue).getValue();
		return *this;
	}

	Long& operator*=(const Long& ref)
	{
		long newValue = value * ref.value;
		value = Long(newValue).getValue();
		return *this;
	}

	Long& operator/=(const Long& ref)
	{
		long newValue = value / ref.value;
		value = Long(newValue).getValue();
		return *this;
	}

	bool operator>=(const Long& ref)
	{
		return value >= ref.value;
	}

	bool operator >(const Long& ref)
	{
		return value > ref.value;
	}

	bool operator <(const Long& ref)
	{
		return value < ref.value;
	}

	bool operator<=(const Long& ref)
	{
		return value <= ref.value;
	}

	long getValue() {
		return value;
	}

	virtual String toString() {
		String string = String(value);
		return string;
	}
};