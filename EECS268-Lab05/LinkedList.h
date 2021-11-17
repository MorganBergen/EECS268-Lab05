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
	T getEntry(int position) const;
	bool isEmpty() const;
	int getLength() const;
	bool insert(int position, const T& new_entry);
	bool remove(int position);
	
};

#include "LinkedList.hpp"

#endif


