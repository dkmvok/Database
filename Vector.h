#ifndef VECTOR_H
#define VECTOR_H

#include "Customer.h"
#include "Node.h"

using namespace std;
#include <stdlib.h>


template <class T>
class Vector
{
private:
	Node<T> *head;
	// Actual number of elements in the array.
	int numberOfCurrentRecords;
public:
	/* The default constructor should create a dynamically allocated array with
	   2 array elements of pointers of type Customer*, which is type for a dynamic 
	   object of the class Customer .*/

	Vector();

	int size();  //ok
	// Adds e to end of v. Expands v if necessary.
	void pushBack(T* record);
	// Removes element at index position and re-arrange array elements
	void erase(int sSN); //ok
	bool find(int sSN); //ok
	// Prints all the records in the array.
	void print(); //ok
};

#endif
