#pragma once


#include "Nxf.h"

#include "System.h"

class PhxPart;
class NxPhysicsSDK;
class NxScene;
class NxControllerManager;
class NxActorDesc;
class NxBoxShapeDesc;
class Regulator;
class Timer;

/// To do: Missing al physX system
class PhxEngine : public System
{

private:
	NxPhysicsSDK*			m_PhysicsSDK;
	NxScene*				m_Scene;
	//NxControllerManager*	phxManager;
	NxReal					m_Timestep;

	bool					m_bEngineWorking;

public:
	PhxEngine();
	~PhxEngine();

	void Enter(Timer * timer , float numUpdatesSec);
	void Update();
	void Exit();

	PhxPart* GeneratePart();

	void TryReleaseMem();
	bool CreateScene();


};