#pragma once

class Timer;

class Part
{
public:
	enum PartType{GfxPart, NtwPart, AIPart, MsgPart, PhxPart, SndPart};

	PartType m_Type;

	Part(PartType type);
	~Part(void);

	virtual void Enter(Timer * timer);
	virtual void Update();
	virtual void Exit();
};
