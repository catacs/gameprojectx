#pragma once
#include "System.h"
#include "Ogre.h"

class Timer;

class GfxEngine : public System
{
public:
	GfxEngine();
	~GfxEngine();
	void Enter(Timer * timer );
	void Update();
	void Exit();

private:
	Ogre::Root * m_oRoot;

};