template <typename T>
class ArrayList {
private:
	int size;
	T* collection;

	void makeBiggerAndCopy() {
		T* newCollection = new T[size + 1];
		directCopy(newCollection);
	}

	void makeSmallerAndCopy(int newSize, int skippedIndex) {
		T* newCollection = new T[newSize];
		copySkipIndex(newCollection, newSize, skippedIndex);
	}

	void directCopy(T* newCollection) {
		for (unsigned int i = 0; i < size; i++)
		{
			newCollection[i] = collection[i];
		}
		if (collection) {
			delete[] collection;
			collection = newCollection;
		}
	}

	void copySkipIndex(T* newCollection, int newSize, int skippedIndex) {
		int index = 0;
		int copyIndex = 0;
		while (index != size) {
			if (index != skippedIndex) {
				newCollection[copyIndex] = collection[index];
				copyIndex++;
			}
			index++;
		}
		if (collection) {
			delete[] collection;
			collection = newCollection;
		}
	}
public:
	ArrayList() {
		this->collection = NULL;
		this->size = 0;
	}
	~ArrayList() {
		delete[] collection;
	}

	void add(const T* item) {
		if (isEmpty()) {
			collection = new T[size + 1];
		}
		else {
			makeBiggerAndCopy();
		}
		this->collection[size] = item;
		size++;
	}

	bool contains(const T* item) {
		bool contains = false;
		for (unsigned int i = 0; i < size; i++)
		{
			contains = (collection[i] == item);
			if (contains) {
				i = size;
			}
		}
		return contains;
	}

	void remove(const T* item) {
		for (unsigned int i = 0; i < size; i++)
		{
			if (collection[i] == item) {
				makeSmallerAndCopy(size - 1, i);
				size--;
				i = size;
			}
		}
	}

	void removeAt(const unsigned int position) {
		if (position <= size - 1) {
			makeSmallerAndCopy(size - 1, position);
			size--;
		}
	}

	T* toArray() {
		T* copyArray = new T[size];
		for (unsigned int i = 0; i < size; i++)
		{
			copyArray[i] = collection[i];
		}
		return copyArray;
	}

	T& get(const unsigned int position) {
		T& ref = nullptr;
		if (position <= size - 1) {
			ref = collection[position]
		}
		return ref;
	}

	T& first() {
		T ref = NULL;
		if (!isEmpty()) {
			return collection[size - size];
		}
		return ref;
	}

	T& last() {
		T ref = NULL;
		if (!isEmpty()) {
			return collection[size - 1];
		}
		return ref;
	}

	void removeFirst() {
		removeAt(size - size);
	}

	void removeLast() {
		removeAt(size - 1);
	}

	void clear() {
		delete[] collection;
		collection = NULL;
		size = 0;
	}

	int count() {
		return this->size;
	}

	bool isEmpty() {
		return size == 0;
	}
};