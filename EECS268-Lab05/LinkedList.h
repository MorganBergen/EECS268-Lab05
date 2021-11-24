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
	~LinkedList(){};
	void insert(int position, const T& new_entry);
	T getEntry(int position);
	bool isEmpty() const;
	
	int getLength() const;
	
	void remove(int position);
	void clear();
	
	/// replaces the new entry at the given position in this list.
	/// @param position is the position of the netry to replace; 1 ≤ position ≤ getLength()
	/// @param new_entry is the replacement entry
	/// @return None.  The indicated entry is replaced.
	void setEntry(int position, const T& new_entry);
	
	
};

#include "LinkedList.hpp"

#endif


