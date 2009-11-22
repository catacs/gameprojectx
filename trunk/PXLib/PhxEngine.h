#pragma once

#include "System.h"

class Regulator;
class Timer;

/// To do: Missing al physX system
class PhxEngine : public System
{
public:
	PhxEngine();
	~PhxEngine();
	void Enter(Timer * timer);
	void Update();
	void Exit();


};