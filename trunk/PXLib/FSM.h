#pragma once

#include "System.h"

class State;
class Timer;

class FSM: public System
{
	State* m_stCurrent;

public:
	FSM(void);
	~FSM(void);

	void Enter(Timer * timer, State* InitialState=0);
	void Update();
	void Exit();

	void ChangeState(State * newstate);
};
