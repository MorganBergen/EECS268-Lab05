#include "LinkedList.h"
#include <string>
#include <stdexcept>
#include <iostream>

void truth();

int main(int argc, const char * argv[]) {

	
	LinkedList<std::string>* groceries;
	groceries = new LinkedList<std::string>();
	

	try {
		groceries -> insert(1, "apples");
		groceries -> insert(2, "bananas");
		groceries -> insert(3, "sweet potatoes");
		
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		int length = groceries -> getLength();
	
		std::cout << "\ngrocery list: " << std::endl;
		for (int i = 1; i <= length; i++) {
			std::cout << i << ". " << groceries -> getEntry(i) << std::endl;
		}
		
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	return (0);
}


void truth() {
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "true == " << true << std::endl;
	std::cout << "false == " << false << std::endl;
	LinkedList<std::string>* list = nullptr;
	list = new LinkedList<std::string>();
	
	if (list -> isEmpty()) {
		std::cout << "the list is empty" << std::endl;
	} else {
		std::cout << "the list is not empty" << std::endl;
	}
	
	std::cout << list -> getLength() << std::endl;
	
	try {
		list -> insert(1, "yellow");
		list -> insert(2, "green");
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	
	try {
	
		list -> clear();
		
		
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
}
