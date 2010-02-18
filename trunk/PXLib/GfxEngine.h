#pragma once
#include <iostream>

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

	void CreateRoot();
	void DefineResources();
	void SetupRenderSystem();
	void CreateRenderWindow(std::string windowName);
	void InitializeResourceGroups();
	void SetupScene();
	void StartRenderLoop();
	Ogre::Root * GetOgreRoot();

	void SetWindowTitle(std::string newTitle);

private:
	Ogre::Root * m_oRoot;
	std::string m_sWindowTitle;
};