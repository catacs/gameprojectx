#pragma once

#include "System.h"

class Timer;

class PXEngine: public System
{
private: 	

public:
	PXEngine(void);
	~PXEngine(void);


	void Enter(Timer * timer);
	void Update();
	void Exit();
};
