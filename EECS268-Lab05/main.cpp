#include "LinkedList.h"
#include <string>
#include <stdexcept>
#include <iostream>


int main() {

	LinkedList<std::string>* groceries;
	groceries = new LinkedList<std::string>();
	

	try {
		groceries -> insert(1, "apples");
		std::cout << groceries -> getLength() << std::endl;
		groceries -> insert(2, "bananas");
		std::cout << groceries -> getLength() << std::endl;
		groceries -> insert(3, "sweet potatoes");
		std::cout << groceries -> getLength() << std::endl;
		groceries -> insert(4, "argula");
		std::cout << groceries -> getLength() << std::endl;
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


