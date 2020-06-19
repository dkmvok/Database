#include <iostream>
#include <string>
#include "Customer.h"

using namespace std;


/*------------------------------------------------------------------------
 Initialize all data of customer
--------------------------------------------------------------------------*/
Customer::Customer(string name, int ssn, int pac, int pNumber) {

	setName(name);
	setSocialSecurityNumber(ssn);
	setPhoneAreaCode(pac);
	setPhoneNumber(pNumber);

}

/*------------------------------------------------------------------------
Set customer name
--------------------------------------------------------------------------*/
void Customer::setName(string customerName) {
 
	name = customerName;

}
/*------------------------------------------------------------------------
Set ssn 
--------------------------------------------------------------------------*/
void Customer::setSocialSecurityNumber(int ssn) {

	if(ssn >= 100000000 && ssn <= 999999999) {
		socialSecurityNumber = ssn;
	}
	else {
		cout<<"\n Invalid input\n";
		exit(1);
	}

}
/*------------------------------------------------------------------------
Set pac
--------------------------------------------------------------------------*/
void Customer::setPhoneAreaCode(int pac) {
	
	if(pac == 713 || pac == 281)
		phoneAreaCode =  pac;
	else {
		cout<<"\nInvalid Input\n";
	}
	
}
/*------------------------------------------------------------------------
Set PhoneNumber
--------------------------------------------------------------------------*/
void Customer::setPhoneNumber(int pNumber) {
	
	phoneNumber = pNumber;
	
}
/*------------------------------------------------------------------------
Display Output
--------------------------------------------------------------------------*/
void Customer::prettyPrintData() {
	
	cout<< name <<" "<< socialSecurityNumber <<" "<<phoneAreaCode <<" " << phoneNumber << endl;
	
}
/*------------------------------------------------------------------------
get Name 
--------------------------------------------------------------------------*/
string Customer::getName() {
	
	return name;
	
}
/*------------------------------------------------------------------------
get SSN
--------------------------------------------------------------------------*/
int Customer::getSocialSecurityNumber() {
	
	return socialSecurityNumber;
}
/*------------------------------------------------------------------------
get pac 
--------------------------------------------------------------------------*/
short Customer::getPhoneAreaCode() {
	
	return phoneAreaCode
}
/*------------------------------------------------------------------------
Display Output
--------------------------------------------------------------------------*/
int Customer::getPhoneNumber() {
	
	return phoneNumber;
}


