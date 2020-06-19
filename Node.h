#ifndef NODE_H
#define NODE_H
#include "Customer.h"

template <class T>
class Node {
	private: T *data;
		Node<T> *link;
	public:
		Node(T *theData,Node<T> *theLink): data(theData),link(theLink) {}
		T* getData() {return data;}
		void setLink(Node<T> *pointer) {link = pointer;}
		Node<T>* getLink() {return link;}
};

#endif