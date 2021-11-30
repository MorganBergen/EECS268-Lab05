#include "Executive.h"
#include "LinkedList.h"
#include "Browser.h"
#include <string>
#include <iostream>
#include <stdexcept>
#include <fstream>

Executive::Executive() {
	Browser history;
}

Executive::~Executive() {}

void Executive::run() {
	
	history.navigateTo("http://google.com");
	history.navigateTo("http://reddit.com");
	history.navigateTo("http://facebook.com");
	history.navigateTo("http://myspace.com");
	history.print();
	history.back();
	history.back();
	history.print();
	history.forward();
	history.forward();
	history.forward();
	history.forward();
	history.print();
	history.back();
	history.back();
	history.back();
	history.navigateTo("http://ku.edu");
	history.forward();
	history.print();
	history.back();
	history.print();
}

void Executive::fileIO(std::string p_file) {
	
	std::ifstream inStream;

	inStream.open(m_file);
	
	
	
}


