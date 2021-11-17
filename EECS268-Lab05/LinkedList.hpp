#include <stdio.h>
#include <iostream>
#include <stdexcept>
#include "Node.h"
#include "LinkedList.h"

template <typename T>
LinkedList<T>::LinkedList() {
	std::cout << "\n-- AN EMPTY LINKED LIST HAS BEEN CREATED." << std::endl;
	headptr = nullptr;
	m_length = 0;
}

template <typename T>
Node<T>* LinkedList<T>::getNodeAt(int position){
	
	std::cout << "\n-- NODE AT POSITION " << position << " WILL BE RETURNED." << std::endl;
	
	bool valid_position = (position >= 1) && (position <= m_length);
	
	if (valid_position) {
		
		Node<T>* jumper = nullptr;
		jumper = headptr;
		
		for (int skip = 1; skip < position; skip++) {
			jumper = jumper -> getNext();
		}
		
		return (jumper);
		
	} else {
		throw (std::runtime_error("invalid position"));
	}
	
}

template <typename T>
bool LinkedList<T>::isEmpty() const {
	
	std::cout << "\n-- RETURNING THE IS EMPTY STATUS OF THE LIST." << std::endl;
	
	if (m_length == 0) {
		return(true);
	}
	return(false);
}

template <typename T>
int LinkedList<T>::getLength() const {
	std::cout << "\n-- RETURNING THE AMOUNT OF NODE OBJECTS IN THE LIST." << std::endl;
	return(m_length);
}

template <typename T>
bool LinkedList<T>::insert(int position, const T& new_entry) {
	
	std::cout << "-- THE NEW ENTRY " << new_entry << " AT POSITION ";
	std::cout << position << " WILL BE INSERTED INTO THE LIST." << std::endl;
	
	bool valid_position = (position >= 1) && (position <= m_length + 1);
	
	if (valid_position == true) {
		std::cout << "the position of " << position << " is valid." << std::endl;
	} else {
		std::cout << "(position >= 1)" << std::endl;
		std::cout << "(" << position << " >= " << 1 << ")" << std::endl;
		std::cout << "(position <= m_length + 1)" << std::endl;
		std::cout << "(" << position << " <= " << (m_length+1) << ")" << std::endl;
	}
	
	if (valid_position) {
		
		Node<T>* insert_ptr = nullptr;
		insert_ptr = new Node<T>(new_entry);
		
		if (valid_position == 1) {
			
			insert_ptr -> setNext(headptr);
			headptr = insert_ptr;
			
		} else {
			Node<T>* prev_ptr = nullptr;
			Node<T>* target_ptr = nullptr;
			prev_ptr = getNodeAt(position - 1);
			target_ptr = prev_ptr -> getNext();
			
			insert_ptr -> setNext(target_ptr);
			prev_ptr -> setNext(insert_ptr);
			
		}
		
		m_length++;
		
	} else {
		throw (std::runtime_error("invalid position"));
	}
	
	return (valid_position);
}

template <typename T>
bool LinkedList<T>::remove(int position) {
	
	bool valid_position = (position >= 1) && (position <= m_length);
	return (valid_position);
	
	
}
