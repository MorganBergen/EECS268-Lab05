#include "Executive.h"
#include "Browser.h"
#include <string>
#include <stdexcept>
#include <iostream>
#include <fstream>

int main() {
	
	Executive object;
	object.run();
	object.run();
	object.fileIO("hello");

	return (0);
}
