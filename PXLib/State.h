#pragma once

#include <string>

class FSM;

class State
{
	std::string m_Name;
	FSM *m_FSMowner;
public:
	State(std::string m_Name,FSM *fsm);
	~State(void){};

	virtual void Enter()=0;
	virtual void Update()=0;
	virtual void Exit()=0;

	std::string getName();

	FSM* getFSMowner();
};
