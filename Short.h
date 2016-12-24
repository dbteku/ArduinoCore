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

	virtual bool operator == (const Short& ref) const
	{
		bool areEqual;
		const Short* me = this;
		areEqual = value == ref.value;
		return areEqual;
	}

	virtual bool equals(const Short& ref) {
		Short* me = this;
		return value == ref.value;
	}

	Short operator+(const Short& ref)
	{
		short newValue = value + ref.value;
		return Short(newValue);
	}

	Short operator-(const Short& ref)
	{
		short newValue = value - ref.value;
		return Short(newValue);
	}

	Short operator*(const Short& ref)
	{
		short newValue = value * ref.value;
		return Short(newValue);
	}

	Short operator/(const Short& ref)
	{
		short newValue = value / ref.value;
		return Short(newValue);
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
		short newValue = value + ref.value;
		value = Short(newValue).getValue();
		return *this;
	}

	Short& operator-=(const Short& ref)
	{
		short newValue = value - ref.value;
		value = Short(newValue).getValue();
		return *this;
	}

	Short& operator*=(const Short& ref)
	{
		short newValue = value * ref.value;
		value = Short(newValue).getValue();
		return *this;
	}

	Short& operator/=(const Short& ref)
	{
		short newValue = value / ref.value;
		value = Short(newValue).getValue();
		return *this;
	}

	short& getValue() {
		return value;
	}

	virtual String toString() {
		String string = String(value);
		return string;
	}

};