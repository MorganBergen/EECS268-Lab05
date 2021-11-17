#ifndef Node_h
#define Node_h

template <typename T>
class Node {

private:
	T m_entry;
	Node<T>* m_next_node;
	
public:
	Node();
	Node(const T& new_entry);
	Node(const T& new_entry, Node<T>* new_next_node);
	T getEntry() const;
	void setEntry(const T& new_entry);
	Node<T>* getNext() const;
	void setNext(const Node<T>* new_next_node);
	
}

#include "Node.hpp"

#endif
