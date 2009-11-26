#pragma once

#include "Part.h"

class Timer;
class Entity;

class MsgPart : public Part
{
public:
	MsgPart(void);
	~MsgPart(void);

	void Enter(Timer * timer, Entity* owner);
	void Update();
	void Exit();
};
