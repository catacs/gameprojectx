#pragma once
#include "System.h"
class Timer;

class AppLayer: public System
{
public:
	AppLayer(void);
	~AppLayer(void);

	void Enter(Timer * timer);
	void Update();
	void Exit();
};
