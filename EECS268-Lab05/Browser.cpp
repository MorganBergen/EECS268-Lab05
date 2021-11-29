#include "Browser.h"
#include "LinkedList.h"
#include "ListInterface.h"
#include <stdexcept>
#include <string>

Browser::Browser() {
	history_list = new LinkedList<std::string>();
	current = 0;
}

Browser::~Browser() {
	history_list -> ~ListInterface<std::string>();
}

void Browser::navigateTo(std::string url) {
	try {
		
		int position = history_list -> length();
		
		if (position == 0) {
			history_list -> insert(position + 1, url);
			current = position + 1;
		} else {
			history_list -> insert(position + 1, url);
			current = position + 1;
		}
		
	} catch (std::runtime_error& e) {
		std::cerr << e.what() << std::endl;
	}
}

void Browser::print() {
	
	std::cout << "\nOldest\n===========\n";
	
	
	try {
		for (int i = 1; i <= history_list -> length(); i++) {
			if (i == current) {
				std::cout << "<URL> " << i << ". " << history_list -> getEntry(i) << " <== current" << std::endl;
			} else {
				std::cout << "<URL> " << i << ". " << history_list -> getEntry(i) << std::endl;
			}
		}
		
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "===========\nNewest" << std::endl;
}

void Browser::forward() {
	
}


















