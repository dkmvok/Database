#ifndef DATABASE_H
#define DATABASE_H
#include "Vector.h"
#include "Node.h"

using namespace std;

class Database {

	private:
		Vector<Customer> data;
	public:
		void addcustomer(string name, int ssn, int pac, int pNumber);
		void removeCustomer(int ssn);
		void listCustomers();

};
#endif