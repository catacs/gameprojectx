#pragma once

#include <string>
#include "System.h"

using namespace std;

class EventManager: public System
{
public:
	EventManager(void);
	~EventManager(void);
	void AddScript(string name);
	void RemoveScript(string name);	
};
