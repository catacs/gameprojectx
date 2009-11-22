#pragma once

class System
{
public:
	System(){}
	~System(){}
	virtual void Enter();
	virtual void Update(long int time);
	virtual void Exit();
};