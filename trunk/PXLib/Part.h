#pragma once

class Timer;
class Entity;

class Part
{
public:
	enum PartType{GfxPart, NtwPart, AIPart, MsgPart, PhxPart, SndPart};

	PartType m_Type;
	Entity * m_Owner;

	Part(PartType type);
	~Part(void);

	virtual void Enter(Timer * timer, Entity* owner){}
	virtual void Update(){}
	virtual void Exit(){}
};
