#pragma once

#include "System.h"

class Timer; 
class SndPart;

class SndEngine
{
public:
	SndEngine(void);
	~SndEngine(void);

	void Enter(Timer * timer);
	void Update();
	void Exit();

	SndPart* GeneratePart();
};
