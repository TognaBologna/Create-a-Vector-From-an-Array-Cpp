//Author: Tony Reid
// Assignment: Project 04
// File: MyVector.h
// Instructor: Harken
// Class: CS 1410-601
// Date: 22 February 2015
// Description: Create a vector using an array. Test using given driver/source cpp.

//I declare that the following source code was written solely by me, except for the provided driver code (Driver.cpp and Driver.h)
//I understand that copying any source code, in whole or in part, constitutes cheating, and that I will receive a zero on this project if I am found in violation of this policy.

#pragma once
using namespace std;

class MyVector
{
private:
	int size_var = 0;
	int capacity_var = 0;
	int* data = 0;
	void grow();
	

public:

	//A default constructor that creates a vector that is empty.
	//Its size and capacity will both be zero.Remember that size refers to the number of elements currently stored in the vector.
	MyVector();

	//A parameterized constructor that creates a vector of capacity n.Its size will initially be zero.
	MyVector(int capacity);
	
	//A destructor that deletes any dynamically allocated storage.The destructor should prevent your program from having memory leaks.
	~MyVector();

	//A function size() that returns the size of your vector.
	//The size is defined as the number of integer values that have been stored in the vector.The size will change as integer values are added.
	int size() const;

	//A function capacity() that returns the capacity of the vector.
	//The capacity is defined as the number of integer values that can be stored in the vector.The capacity changes when the vector grows.
	int capacity() const;

	//A function clear() that deletes all of the elements from the vector and resets its size and capacity to zero.
	void clear();

	//A function push_back(int n) that adds the integer value n to the end of the vector.
	//If the vector is not large enough to hold this additional value, you must make the vector grow.
	//Your grow algorithm should double the current capacity of the vector.Be sure to consider the special case when the vector is initially empty.
	void push_back(int n);

	//A function at(int n) that returns the value of the integer stored at index n of the vector.
	//If the index outside the range of the vector(no element at that index), this function should throw an exception.
	//Instead of creating an exception class for this case, just throw an integer value that represents the index parameter passed to the function.
	int at(int n);

};

