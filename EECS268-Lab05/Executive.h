#ifndef Executive_h
#define Executive_h

#include <stdio.h>
#include "LinkedList.h"

class Executive {
private:
	LinkedList<std::string>* list;

public:
	Executive();
	~Executive();
	void run();
	void copy();
	
};

#endif
