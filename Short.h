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

	bool operator == (const Short& ref) const
	{
		bool areEqual = false;
		const Short* me = this;
		areEqual = me == &ref || *value == *ref.value;
		return areEqual;
	}

	virtual bool equals(const Short& ref) {
		Short* me = this;
		return me == &ref || *value == *ref.value;
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