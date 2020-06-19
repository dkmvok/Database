#include "Database.h"
#include "Node.h"
#include <iostream>
using namespace std;


/*------------------------------------------------------------------------
Add customer 
--------------------------------------------------------------------------*/
void Database::addcustomer(string name, int ssn, int pac, int pNumber) {
	
	if(data.find(ssn) == false) {
		Customer *customer;
		customer = new Customer(name,ssn,pac, pnumber);
		data.pushBack(customer);
	}
	else {
		cout<<"Existing Record\n";
	}
	
}
/*------------------------------------------------------------------------
Remove customer
--------------------------------------------------------------------------*/
void Database::removeCustomer(int ssn) {
	
	if(data.find(ssn) == true) {
		data.erase(ssn);
	}
	else {
		cout<< "No such record exist\n";
	}
	
}
/*------------------------------------------------------------------------
Display customer 
--------------------------------------------------------------------------*/
void Database::listCustomers() {
	if(data.size() != 0){
		data.print();
	}
	else {
		cout<<"There is no record.\n";
	}
	
}