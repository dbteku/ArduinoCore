#ifndef Object_h
#define Object_h
#include <Object.h>
#endif

class Short : public Object {
private:
	short* value;

	String getName() {
		return "Short";
	}
public:
	Short() {
		value = new short(0);
	}
	Short(short value) {
		this->value = new short(value);
	}
	~Short() {
		delete value;
	}

	Short& operator+(const Short& ref)
	{
		short* newValue = new short(*value + *ref.value);
		Short* newValueObject = new Short(*newValue);

		return *newValueObject;
	}

	Short& operator-(const Short& ref)
	{
		short* newValue = new short(*value - *ref.value);
		Short* newValueObject = new Short(*newValue);

		return *newValueObject;
	}

	Short& operator *(const Short& ref)
	{
		short* newValue = new short(*value * *ref.value);
		Short* newValueObject = new Short(*newValue);

		return *newValueObject;
	}

	Short& operator /(const Short& ref)
	{
		short* newValue = new short(*value - *ref.value);
		Short* newValueObject = new Short(*newValue);

		return *newValueObject;
	}

	Short& operator++()
	{
		value++;
		return *this;
	}

	Short& operator--()
	{
		value--;
		return *this;
	}

	Short& operator+=(const Short& ref)
	{                      
		short* newValue = new short(*value + *ref.value);
		Short* newValueObject = new Short(*newValue);

		return *newValueObject;
	}

	Short& operator*=(const Short& ref)
	{
		short* newValue = new short(*value * *ref.value);
		Short* newValueObject = new Short(*newValue);

		return *newValueObject;
	}

	Short& operator/=(const Short& ref)
	{
		short* newValue = new short(*value / *ref.value);
		Short* newValueObject = new Short(*newValue);

		return *newValueObject;
	}

	Short& operator-=(const Short& ref)
	{
		short* newValue = new short(*value - *ref.value);
		Short* newValueObject = new Short(*newValue);

		return *newValueObject;
	}

	short& getValue() {
		return *value;
	}

	String toString() {
		String string = String(*value);
		return string;
	}

};