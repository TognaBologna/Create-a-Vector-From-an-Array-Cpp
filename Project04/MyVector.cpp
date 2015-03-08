//Author: Tony Reid
// Assignment: Project 04
// File: MyVector.cpp
// Instructor: Harken
// Class: CS 1410-601
// Date: 22 February 2015
// Description: Create a vector using an array. Test using given driver/source cpp.

//I declare that the following source code was written solely by me, except for the provided driver code (Driver.cpp and Driver.h)
//I understand that copying any source code, in whole or in part, constitutes cheating, and that I will receive a zero on this project if I am found in violation of this policy.

#include "MyVector.h"
using namespace std;

const int TWO = 2;

MyVector::MyVector()
{
	size_var = 0;
	capacity_var = TWO;
	data = new int[TWO];
}

MyVector::MyVector(int n)
{
	capacity_var = n;
	size_var = 0;
	data = new int[n];
}

MyVector::~MyVector()
{
	MyVector::clear();
}

int MyVector::size() const
{
	return size_var;
}

int MyVector::capacity() const
{
	return capacity_var;
}

void MyVector::clear()
{
	delete[] data;
	data = new int[TWO];
	size_var = 0;
	capacity_var = TWO;
}

void MyVector::push_back(int n)
{
	if (size_var == capacity_var)
	{
		grow();
	}
	data[size_var] = n;
	size_var++;
}
	
int MyVector::at(int n)
{
	if (n >= size_var || n < 0)
	{
		throw n;
	}
	else
	{
		return data[n];
	}
}

void MyVector::grow()
{
	capacity_var *= TWO;
	int *temp = new int[capacity_var];

	for (int i = 0; i < size_var; i++)
	{
		temp[i] = data[i];
	}

	delete[] data;
	data = temp;
}
