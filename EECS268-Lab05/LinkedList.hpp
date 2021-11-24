#include <stdio.h>
#include <iostream>
#include <stdexcept>
#include "Node.h"
#include "LinkedList.h"

template <typename T>
LinkedList<T>::LinkedList() {
	headptr = nullptr;
	m_length = 0;
}

template <typename T>
Node<T>* LinkedList<T>::getNodeAt(int position) {
	
	bool valid_position = (position >= 1) && (position <= m_length);
	if (valid_position) {
		Node<T>* jumper = nullptr;
		jumper = headptr;
		for (int i = 1; i < position; i++) {
			jumper = jumper -> getNext();
		}
		return (jumper);
	} else {
		throw (std::runtime_error("invalid position"));
	}
}

template <typename T>
bool LinkedList<T>::isEmpty() const {
	if (m_length == 0) {
		return(true);
	}
	return(false);
}

template <typename T>
int LinkedList<T>::getLength() const {
	return(m_length);
}

template <typename T>
bool LinkedList<T>::insert(int position, const T& new_entry) {
	
	bool valid_position = (position >= 1) && (position <= m_length + 1);
	if (valid_position) {
		Node<T>* insert_ptr = nullptr;
		Node<T>* prev_ptr = nullptr;
		Node<T>* target_ptr = nullptr;
		insert_ptr = new Node<T>(new_entry);
		if (position == 1) {
			insert_ptr -> setNext(headptr);
			headptr = insert_ptr;
		} else {
			prev_ptr = getNodeAt(position - 1);
			target_ptr = prev_ptr -> getNext();
			insert_ptr -> setNext(target_ptr);
			prev_ptr -> setNext(insert_ptr);
		}
		m_length++;
	} else {
		throw (std::runtime_error("invalid position\n"));
	}
	return (valid_position);
}

template <typename T>
bool LinkedList<T>::remove(int position) {
	
	bool valid_position = (position >= 1) && (position <= m_length);
	if (valid_position) {
		Node<T>* prev_ptr = nullptr;
		Node<T>* target_ptr = nullptr;
		if (position == 1) {
			target_ptr = headptr;
			headptr = headptr -> getNext();
		} else {
			prev_ptr = getNodeAt(position - 1);
			target_ptr = prev_ptr -> getNext();
			prev_ptr -> setNext(target_ptr -> getNext());
		}
		target_ptr -> setNext(nullptr);
		delete target_ptr;
		target_ptr = nullptr;
		m_length--;
	} else {
		throw (std::runtime_error("position is invalid, and thus the node requested to be removed does not exist."));
	}
	return (valid_position);
}

template <typename T>
void LinkedList<T>::clear() {
	while (!isEmpty()) {
		remove(1);
	}
}

template <typename T>
T LinkedList<T>::getEntry(int position) {
	
	bool valid_position = (position >= 1) && (position <= m_length);
	if (valid_position) {
		Node<T>* newNode = nullptr;
		newNode = new Node<T>();
		newNode = getNodeAt(position);
		return (newNode -> getEntry());
	} else {
		throw (std::runtime_error("invalid position."));
	}
	return(0);
}

template <typename T>
LinkedList<T>::~LinkedList(){
	clear();
}






























