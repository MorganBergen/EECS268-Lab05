#ifndef Executive_h
#define Executive_h

#include <stdio.h>
#include "ListInterface.h"
#include "Browser.h"

class Executive {
private:
	Browser history;
	
public:
	void main();
	Executive();
	~Executive();
	void run();
	
};

#endif
