#pragma once

#include "Part.h"

class Timer;
class Entity;
class SceneNode;

class GfxPart : public Part
{
private:
	SceneNode * m_SceneNode;
	
public:
	GfxPart(void);
	~GfxPart(void);

	void Enter(Timer * timer, Entity* owner);
	void Update();
	void Exit();
};
