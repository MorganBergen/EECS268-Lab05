#include <stdio.h>

#include "Node.h"

template <typename T>
Node<T>::Node() {}

template <typename T>
Node<T>::Node(const T& new_entry) {
	m_entry = new_entry;
	m_next_node = nullptr;
}

template <typename T>
Node<T>::Node(const T& new_entry, Node<T>* new_next_node) {
	m_entry = new_entry;
	m_next_node = new_next_node;
}

template <typename T>
T Node<T>::getEntry() const {
	return(m_entry);
}

template <typename T>
void setEntry(const T& new_entry) {
	m_entry = new_entry;
}

template <typename T>
Node<T>& getNext() const {
	return(m_next_node);
}

template <typename T>
void Node<T>::setNext(const Node<T>* new_next_node) {
	m_next_node = new_next_node;
}
