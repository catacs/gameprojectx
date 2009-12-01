#pragma once

#include "Part.h"

class Timer;
class Entity;
class SceneNode;
class GfxEngine;

class GfxPart : public Part
{
private:
	SceneNode * m_SceneNode;
	GfxEngine * m_EngineRef;
	
public:
	GfxPart(void);
	~GfxPart(void);

	void Enter(Timer * timer, Entity* owner);
	void SetGfxEngineRef(GfxEngine * refPtr);
	void Update();
	void Exit();
};
