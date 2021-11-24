#include "LinkedList.h"
#include <string>
#include <stdexcept>
#include <iostream>

int main() {

	LinkedList<std::string>* groceries;
	groceries = new LinkedList<std::string>();
	
	
	try {
		groceries -> insert(1, "apples");
		groceries -> insert(2, "bananas");
		groceries -> insert(3, "sweet potatoes");
		groceries -> insert(4, "argula");
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
	
	groceries -> ~LinkedList<std::string>();
	
	std::cout << std::endl;
	return (0);
}


/*
 commands for lldb debugger

	 (gdb) ./exec						(lldb) ./exec
	 (gdb) break:fileName:lineNumer		(lldb) b fileName.cpp:lineNumber
	 (gdb) print variable name			(lldb) print variableName
	 (gdb) step							(lldb) step
	 (gdb) print * ptr @ sizeOfArray	(lldb) parray sizeNumberOfArray ptr
	 (gdb) info locals					(lldb) frame variable
	 (gdb) next							(lldb) tread step-over
	 (gdb) next							(lldb) next
	 (gdb) disable 						(lldb) breakpoint disable 1
	 (gdb) continue
	 (gdb) quit							(lldb) quit
	 (gdb) info break					(lldb) breakpoint list
	 (gdb) shell clear					(lldb) clear

 */
