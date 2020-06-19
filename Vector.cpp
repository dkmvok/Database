#include "Vector.h"
#include <iostream>

using namespace std;

template <class T>
Vector<T>::Vector() {

	numberOfCurrentRecords = 0;
	head = NULL;

}

template <class T>
int Vector<T>::size() {

	return numberOfCurrentRecords;

}

template <class T>
void Vector<T>::pushBack(T* record) {

  if(head == NULL) {
  
	Node<T>* head;
	head = new Node<T>(record,head);
	
  }
  else {
	Node<T> *last = head;
	
	while(last->getLink() != NULL) {
		last = last->getLink();
	}
	last->setLink(new Node<T>(record, last->getLink()));
  }
	numberOfCurrentRecords++;
	
}

template <class T>
void Vector<T>::erase(int ssn) {
	Node<T> *afterMe = NULL;
	Node<T> *here = head;
	
	while(here->getData()->getSocialSecurityNumber() != ssn && here->getLink() != NULL) {
		
		afterMe = here;
		here = here->getLink();
		
	}
	
	if(afterMe == NULL) {
		
		Node<T> *discard = head;
		head = head->getLink();
		delete discard;
		
	}
	
	else {
		
		Node<T> *discard = afterMe->getLink();
		afterMe->setLink(discard-> getLink());
		delete discard;
	}
	numberOfCurrentRecords--;
}

template <class T>
bool Vector<T>::find(int ssn) {
	bool result = false;
	
	if(head != NULL) {
		
		Node<T> *here = head;
		while(here->getData()->getSocialSecurityNumber() != ssn && here->getLink() != NULL) {
			here = here->getLink();
			
		}
		if(here->getData()->getSocialSecurityNumber() == ssn) {
			result = true;
			
		}
	}
	return result;
}
template <class T>
void Vector<T>::print() {
	Node<T> *here = head;
	while(here->getLink() != NULL) {
		here->getData()->prettyPrintData();
		here = here->getLink();
	}
	here->getData()->prettyPrintData();
	
}