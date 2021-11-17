#include "LinkedList.h"
#include <string>
#include <iostream>

void truth();

int main(int argc, const char * argv[]) {

	LinkedList<std::string>* list = nullptr;
	list = new LinkedList<std::string>();
	
	if (list -> isEmpty()) {
		std::cout << "the list is empty" << std::endl;
	} else {
		std::cout << "the list is not empty" << std::endl;
	}
	
	std::cout << list -> getLength() << std::endl;
	
	try {
		std::cout << list -> insert(1, "yellow") << std::endl;
		std::cout << list -> insert(2, "green") << std::endl;
	} catch (std::runtime_error &e) {
		std::cout << e.what() << std::endl;
	}
	
	truth();
	
	std::cout << std::endl;
	return (0);
}


void truth() {
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "true == " << true << std::endl;
	std::cout << "false == " << false << std::endl;
}
