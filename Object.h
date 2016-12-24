class Object {
private:

	virtual String getName() {
		return F("Object");
	}
public:
	Object() {

	}
	~Object() {
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

	virtual String toString() {
		Object me = *this;
		String string = "";
		unsigned int rawAddress = (uintptr_t)this;
		String address = String(rawAddress, HEX);
		string.concat(getName());
		string.concat(F("@"));
		string.concat(address);
		return string;
	}
};