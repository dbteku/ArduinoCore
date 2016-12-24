#ifndef Object_h
#define Object_h
#include <Object.h>
#endif

class Short : public Object {
private:
	short value;

	String getName() {
		return F("Short");
	}
public:
	Short() {
		this->value = short(0);
	}
	Short(short value) {
		this->value = short(value);
	}
	~Short() {
	}

	bool operator == (const Short& ref) const
	{
		bool areEqual = false;
		const Short* me = this;
		areEqual = me == &ref || value == ref.value;
		return areEqual;
	}

	virtual bool equals(const Short& ref) {
		Short* me = this;
		return me == &ref || value == ref.value;
	}

	Short& operator+(const Short& ref)
	{
		short* newValue = new short(value + ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Short& operator-(const Short& ref)
	{
		short* newValue = new short(value - ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Short& operator*(const Short& ref)
	{
		short* newValue = new short(value * ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Short& operator/(const Short& ref)
	{
		short* newValue = new short(value / ref.value);
		value = *newValue;
		delete newValue;
		return *this;
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
		short* newValue = new short(value + ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Short& operator-=(const Short& ref)
	{
		short* newValue = new short(value - ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Short& operator*=(const Short& ref)
	{
		short* newValue = new short(value * ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	Short& operator/=(const Short& ref)
	{
		short* newValue = new short(value / ref.value);
		value = *newValue;
		delete newValue;
		return *this;
	}

	short& getValue() {
		return value;
	}

	String toString() {
		String string = String(value);
		return string;
	}

};