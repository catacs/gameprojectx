#pragma once

class Timer;

class Condition
{
public:
	Condition(void);
	~Condition(void);

	virtual void Enter(Timer* timer);
	virtual void Update();
	virtual void Exit();
	virtual bool Met();
};
