#ifndef Object_h
#define Object_h
#include <Object.h>
#endif

class Long : public Object {
private:
	long* value;

	String getName() {
		return "Long";
	}
public:
	Long() {
		value = new long(0);
	}
	Long(long value) {
		this->value = new long(value);
	}
	Long(int value) {
		this->value = new long(value);
	}
	Long(short value) {
		this->value = new long(value);
	}
	~Long() {
		delete value;
	}

	Long& operator+(const Long& ref)
	{
		long* newValue = new long(*value + *ref.value);
		Long* newValueObject = new Long(*newValue);

		return *newValueObject;
	}

	Long& operator-(const Long& ref)
	{
		long* newValue = new long(*value - *ref.value);
		Long* newValueObject = new Long(*newValue);

		return *newValueObject;
	}

	Long& operator *(const Long& ref)
	{
		long* newValue = new long(*value * *ref.value);
		Long* newValueObject = new Long(*newValue);

		return *newValueObject;
	}

	Long& operator /(const Long& ref)
	{
		long* newValue = new long(*value - *ref.value);
		Long* newValueObject = new Long(*newValue);

		return *newValueObject;
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
		long* newValue = new long(*value + *ref.value);
		Long* newValueObject = new Long(*newValue);

		return *newValueObject;
	}

	Long& operator*=(const Long& ref)
	{
		long* newValue = new long(*value * *ref.value);
		Long* newValueObject = new Long(*newValue);

		return *newValueObject;
	}

	Long& operator/=(const Long& ref)
	{
		long* newValue = new long(*value / *ref.value);
		Long* newValueObject = new Long(*newValue);

		return *newValueObject;
	}

	Long& operator-=(const Long& ref)
	{
		long* newValue = new long(*value - *ref.value);
		Long* newValueObject = new Long(*newValue);

		return *newValueObject;
	}

	long& getValue() {
		return *value;
	}

	String toString() {
		String string = String(*value);
		return string;
	}

};