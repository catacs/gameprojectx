#pragma once

class Part
{
public:
	enum PartType{GfxPart, NtwPart, AIPart, MsgPart, PhxPart, SndPart};

	PartType m_Type;

	Part(void);
	~Part(void);
};
