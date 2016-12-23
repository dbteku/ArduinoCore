
#include<Arduino.h>

class Object {
private:
	int i;
public:
	Object() {
		i = 0;
	}
	~Object() {
	}

	Object& operator++()
	{
		i++;
		return *this;
	}

	bool operator == (const Object& ref) const
	{
		bool areEqual = false;
		const Object* me = this;
		areEqual = me == &ref;
		return areEqual;
	}

	virtual bool equals(const Object& ref) {
		Object* me = this;
		return me == &ref;
	}

	int getI() {
		return i;
	}
};