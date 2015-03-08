//Author: Tony Reid
// Assignment: Project 04
// File: Driver.cpp
// Instructor: Harken
// Class: CS 1410-601
// Date: 22 February 2015
// Description: Create a vector using an array. Test using given driver/source cpp.

//I declare that the following source code was written solely by me, except for the provided driver code (Driver.cpp and Driver.h)
//I understand that copying any source code, in whole or in part, constitutes cheating, and that I will receive a zero on this project if I am found in violation of this policy.

#include "Driver.h"

int main()
{
	cout << "Author: Tony Reid" << '\n' << "Project 04" << '\n' << "22 February 2015" << endl;

	// Create a default vector 
	MyVector sam;

	// push some data into sam
	cout << "\nPushing three values into sam";
	sam.push_back(TEST_VALUE1);
	sam.push_back(TEST_VALUE2);
	sam.push_back(TEST_VALUE3);

	cout << "\nThe values in sam are: ";

	// test for out of bounds condition here
	// and test exception 
	for (int i = 0; i < sam.size() + 1; i++)
	{
		try
		{
			cout << sam.at(i) << " ";
		}
		catch (int badIndex)
		{
			cout << "\nOut of bounds at index " << badIndex << endl;
		}
	}
	cout << "\n--------------\n";

	// clear sam and display its size and capacity
	sam.clear();
	cout << "\nsam has been cleared.";
	cout << "\nSam's size is now " << sam.size();
	cout << "\nSam's capacity is now " << sam.capacity() << endl;
	cout << "---------------\n";

	// Push 12 values into the vector - it should grow
	cout << "\nPush 12 values into sam.";
	for (int i = 0; i < MAX; i++)
		sam.push_back(i);

	cout << "\nSam's size is now " << sam.size();
	cout << "\nSam's capcacity is now " << sam.capacity() << endl;
	cout << "---------------\n";

	cout << "\nTest to see if contents are correct...";
	// display the values in the vector
	for (int i = 0; i < sam.size(); i++)
	{

		cout << sam.at(i) << " ";
	}
	cout << "\n--------------\n";

	cout << "\n\nTest Complete...";

	cout << endl;
	system("PAUSE");
	return 0;
}