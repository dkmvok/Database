#ifndef CUSTOMER_H 
#define CUSTOMER_H

#include <string>
using namespace std;

class Customer {

private:
	string name;
	int socialSecurityNumber;
	short phoneAreaCode;
	int phoneNumber;
public:
	Customer(string name, int ssn, int pac, int pNumber);
	void setName(string customerName);
	void setSocialSecurityNumber(int ssn);
	void setPhoneAreaCode(int pac);
	void setPhoneNumber(int pNumber);
	void prettyPrintData();
	
	string getName();
	int getSocialSecurityNumber();
	short getPhoneAreaCode();
	int getPhoneNumber();


};
#endif
