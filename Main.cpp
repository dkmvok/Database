#include <iostream>
#include <string>
#include "Database.h"


using namespace std;


int main()
{

	
	Database mart;
	
	Vector<Database>  mart;
	Vector  mart;
	

	cout << "Test 1:\n";
	
	// 1. Check the function listCustomers
	mart.listCustomers();


	cout << "Test 2:\n";
	// 2. Check the function addCustomer
	mart.addCustomer("joseph",  123456000, 281, 3420000);
	mart.addCustomer("allen", 123456001, 281, 3420001);
	mart.addCustomer("radix", 123456001, 281, 3420001);
	mart.listCustomers();

	cout << "Test 3:\n";
	// 3. Check the function removeCustomer
	mart.removeCustomer(123456002);
	mart.addCustomer("joseph", 123456002, 281, 3420002);
	mart.listCustomers();

	cout << "Test 4:\n";
	// 4. Check the function removeCustomer
	mart.removeCustomer(123456000);
	mart.listCustomers();


//system("pause");
return 0;
}
