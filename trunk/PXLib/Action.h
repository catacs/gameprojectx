#pragma once

class Timer;

class Action
{
public:
	Action(void);
	~Action(void);

	virtual void Enter(Timer* timer);
	virtual void Update();
	virtual void Exit();
	virtual bool Done();
};
