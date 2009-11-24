#pragma once
#include "System.h"
#include "Ogre.h"

class Timer;
class GfxPart;

class GfxEngine : public System
{
public:
	GfxEngine();
	~GfxEngine();
	void Enter(Timer * timer );
	void Update();
	void Exit();

	GfxPart * GeneratePart();

private:
	Ogre::Root * m_oRoot;

};