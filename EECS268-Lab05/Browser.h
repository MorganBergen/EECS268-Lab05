#ifndef Browser_h
#define Browser_h

#include <string>
#include <stdio.h>
#include "ListInterface.h"

class Browser {
private:
	ListInterface<std::string>* history_list;
	int current;
	
public:
	Browser();
	~Browser();
	void navigateTo(std::string url);
	void back();
	void forward();
	void print();
	
};

#endif

/*
 oldest
 ===========
 1.
 2.
 3.
 4.
 5.		    <= current
 ===========
 newest
 */






