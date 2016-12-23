# ArduinoCore
Core Library for the Arduino

Types:
    - Object
        - Short
        - Integer
        - Float
        - Double
        - Long

Collections:
--------------------------------------------------------------------------------------
  ArrayList:
    An ArrayList is an Array that scales when you add more items to it.
    Ex* Consider this int array [1,2,3]
      - If you wanted to add another number, like 4 for instance you would have 
        to make a new array, copy the values, and add the new number.
    This class will automaticaly do that for you.
    All you have to do is call the add(T item) method. T as in any object you want.
    
    Methods:
      - void add(T item) Adds an item to the ArrayList.
      - bool contains(T item) Returns if the ArrayList contains the item. (Uses Equality Operation)
      - void remove(T item) Removes item with same equality.
      - void removeAt(const unsigned int position) removes item at given position.
      - T* toArray() Returns a pointer to a copy of the ArrayList as an Array.
      - T& get(const unsigned int position) Returns a reference to a specific item.
      - T& first() Returns a reference to the first item in the ArrayList.
      - T& last() Returns a reference to the last item in the ArrayList.
      - void removeFirst() Removes the first item in the ArrayList.
      - void removeLast() Removes the last item in the ArrayList.
      - void clear() Clears the entire ArrayList.
      - int count() Returns the size of the ArrayList.
      - bool isEmpty() Returns if the ArrayList is empty.
--------------------------------------------------------------------------------------
  
