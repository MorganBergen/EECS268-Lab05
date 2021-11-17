#ifndef LinkedList_h
#define LinkedList_h

#include "Node.h"

template <typename T>
class LinkedList {
private:
	Node<T>* headptr;
	int m_length;
	Node<T>* getNodeAt(int position);
	
public:
	LinkedList();
	
	
	
};

#include "LinkedList.hpp"

#endif


