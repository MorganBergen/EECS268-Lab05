#include "Executive.h"
#include "LinkedList.h"
#include "Browser.h"
#include <string>
#include <iostream>
#include <stdexcept>

Executive::Executive() {
	Browser history;
}

Executive::~Executive() {
	
}

void Executive::run() {
	
	history.navigateTo("http://google.com");
	history.navigateTo("http://reddit.com");
	history.navigateTo("http://facebook.com");
	history.navigateTo("http://myspace.com");

	history.print();
}


