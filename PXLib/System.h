#pragma once
class Timer; 

class System
{
public:
	System(){}
	~System(){}
	virtual void Enter(Timer * timer){}
	virtual void Update(){}
	virtual void Exit(){}
};