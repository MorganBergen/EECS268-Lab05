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
	LinkedList(const LinkedList<T> & orginal);
	~LinkedList();
	void insert(int position, const T& new_entry);
	void remove(int position);
	T getEntry(int position);
	void clear();
	int length() const;
	bool isEmpty() const;
	void setEntry(int position, const T& new_entry);
	
};

#include "LinkedList.hpp"

#endif
