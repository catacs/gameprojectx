#pragma once

#include "System.h"
class State;
class Timer;

class FSM: public System
{
public:
	FSM(void);
	~FSM(void);

	void Enter(Timer * timer);
	void Update();
	void Exit();

	void ChangeState(State * newstate);
};
