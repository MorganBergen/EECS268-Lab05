#include "Executive.h"
#include "LinkedList.h"
#include <string>
#include <iostream>
#include <stdexcept>

Executive::Executive() {
	list = new LinkedList<std::string>();
}

Executive::~Executive() {
	delete list;
}

void Executive::run() {
	
	try {
		list -> insert(1, "first");
		list -> insert(2, "second");
		list -> insert(3, "third");
		list -> insert(4, "fourth");
	} catch (std::runtime_error& e) {
		std::cerr << e.what() << std::endl;
	}
	
}

void Executive::copy() {
	
	LinkedList<std::string>* second;
	second = new LinkedList<std::string>(*list);

	
	try {
		std::cout << "second list\n";
		for (int i = 1; i <= second -> length(); i++) {
			std::cout << i << ". " << second -> getEntry(i) << std::endl;
		}
		
		std::cout << "\nlist list\n";
		for (int i = 1; i <= list -> length(); i++) {
			std::cout << i << ". " << list -> getEntry(i) << std::endl;
		}
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	
	
}


