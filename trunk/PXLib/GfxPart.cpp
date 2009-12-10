#include <iostream>

#include "GfxPart.h"
#include "Part.h"
#include "Timer.h"
#include "Ogre.h"
#include "GfxEngine.h"
#include "Entity.h"

using namespace std;

GfxPart::GfxPart(void) : Part(Part::GfxPart)
{
}

GfxPart::~GfxPart(void)
{
}


void GfxPart::Enter(Timer * timer, Entity* owner)
{
	// TODO Timer stuff
	m_Owner = owner;
}

void GfxPart::SetGfxEngineRef(GfxEngine * refPtr)
{
	m_EngineRef = refPtr;
}

void GfxPart::Update()
{}

void GfxPart::Exit()
{}

void GfxPart::AddAvatar(string fileName)
{
	if(!m_Owner)
	{
		// TODO throw warning, needs a entity for the id
		return;
	}
	string EntityName = "Avatar";
	EntityName += (m_Owner->GetID());
	Ogre::Entity * avatarEntity =  m_EngineRef->GetOgreRoot()->getSceneManager("Default SceneManager")->createEntity(EntityName.c_str(), fileName.c_str());

	string NodeName = "Node";
	NodeName += (m_Owner->GetID());
	Ogre::SceneNode * avatarNode = m_EngineRef->GetOgreRoot()->getSceneManager("Default SceneManager")->getRootSceneNode()->createChildSceneNode( NodeName.c_str());

	avatarNode->attachObject(avatarEntity);
}