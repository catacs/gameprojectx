#pragma once

#include "Part.h"

class Timer; 
class Entity;

class PhxPart : public Part
{
public:
	PhxPart(void);
	~PhxPart(void);

	void Enter(Timer * timer, Entity* owner);
	void Update();
	void Exit();
};
