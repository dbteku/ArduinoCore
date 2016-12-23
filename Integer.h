#ifndef Object_h
#define Object_h
#include <Object.h>
#endif

class Integer : public Object {
private:
	int* value;

	String getName() {
		return "Integer";
	}
public:
	Integer() {
		value = new int(0);
	}
	Integer(int value) {
		this->value = new int(value);
	}
	Integer(short value) {
		this->value = new int(value);
	}
	~Integer() {
		delete value;
	}

	Integer& operator+(const Integer& ref)
	{
		int* newValue = new int(*value + *ref.value);
		Integer* newValueObject = new Integer(*newValue);

		return *newValueObject;
	}

	Integer& operator-(const Integer& ref)
	{
		int* newValue = new int(*value - *ref.value);
		Integer* newValueObject = new Integer(*newValue);

		return *newValueObject;
	}

	Integer& operator *(const Integer& ref)
	{
		int* newValue = new int(*value * *ref.value);
		Integer* newValueObject = new Integer(*newValue);

		return *newValueObject;
	}

	Integer& operator /(const Integer& ref)
	{
		int* newValue = new int(*value - *ref.value);
		Integer* newValueObject = new Integer(*newValue);

		return *newValueObject;
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
		int* newValue = new int(*value + *ref.value);
		Integer* newValueObject = new Integer(*newValue);

		return *newValueObject;
	}

	Integer& operator*=(const Integer& ref)
	{
		int* newValue = new int(*value * *ref.value);
		Integer* newValueObject = new Integer(*newValue);

		return *newValueObject;
	}

	Integer& operator/=(const Integer& ref)
	{
		int* newValue = new int(*value / *ref.value);
		Integer* newValueObject = new Integer(*newValue);

		return *newValueObject;
	}

	Integer& operator-=(const Integer& ref)
	{
		int* newValue = new int(*value - *ref.value);
		Integer* newValueObject = new Integer(*newValue);

		return *newValueObject;
	}

	int& getValue() {
		return *value;
	}

	String toString() {
		String string = String(*value);
		return string;
	}

};