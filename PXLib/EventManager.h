#pragma once

#include <string>
#include "System.h"

using namespace std;

class Timer;

class EventManager: public System
{
public:
	EventManager(void);
	~EventManager(void);
	void AddScript(string name);
	void RemoveScript(string name);	

	void Enter(Timer * timer);
	void Update();
	void Exit();
};
