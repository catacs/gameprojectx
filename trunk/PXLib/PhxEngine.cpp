#include "PhxEngine.h"
#include "Timer.h"
#include "Regulator.h"

#include <NxPhysics.h>
#include <NxScene.h>  
#include <NxControllerManager.h>
#include <NxActorDesc.h>
#include <NxBoxShapeDesc.h>

#include <pantheios/pan.hpp>

PhxEngine::PhxEngine(void)
{
	m_PhysicsSDK = NULL;
	m_Scene = NULL;

	m_bEngineWorking = false;

}

PhxEngine::~PhxEngine(void)
{
	// Check for leftover memory (closing without calling exit)
	TryReleaseMem();
}

void PhxEngine::TryReleaseMem()
{
	if(m_Scene != NULL)
	{
		m_PhysicsSDK->releaseScene(*m_Scene);
		m_Scene = NULL;
	}
	if(m_PhysicsSDK != NULL) 
	{
		m_PhysicsSDK->release();
		m_PhysicsSDK = NULL;
	}
}


void PhxEngine::Enter(Timer * timer , float numUpdatesSec)
{
	m_bEngineWorking = true;
	m_Timestep = 1.0f/numUpdatesSec; 

	//Starts the SDK!
	NxPhysicsSDKDesc sdkDesc;
	m_PhysicsSDK = NxCreatePhysicsSDK(NX_PHYSICS_SDK_VERSION,NULL,NULL,sdkDesc,NULL); // TODO : Add own profiler
	if(m_PhysicsSDK == NULL)
	{
		pan::log_ERROR("Phx: Cannot create PhysicsSDK.");
		m_bEngineWorking = false;
		return;
	}

	//Starts the scene
	if(!CreateScene()) 
	{
		pan::log_ERROR( "Phx: Cannot create NxScene. "); 
		m_bEngineWorking = false;
		return;
	}
		
	//Starts the controller manager
	//CreateControllerManager();


}


void PhxEngine::Update()
{

}


void PhxEngine::Exit()
{
	//Release logic

	// Clean memory
	TryReleaseMem();
}

PhxPart* PhxEngine::GeneratePart()
{
	if(!m_bEngineWorking)        {        pan::log_ERROR( "Phx: PhxEngine Not initialized"); return false;    }
	return NULL;
}


bool PhxEngine::CreateScene()
{	
	if(!m_bEngineWorking)        {        pan::log_ERROR( "Phx: PhxEngine Not initialized"); return false;    }

	if(m_PhysicsSDK)
	{
		NxSceneDesc sceneDesc;
		sceneDesc.gravity.set(0,-9.8f,0);
		m_Scene= m_PhysicsSDK->createScene(sceneDesc);
	}
	return (m_Scene != NULL);
}