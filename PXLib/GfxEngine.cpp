#include <iostream>

#include "GfxEngine.h"
#include "Timer.h"
#include "GfxPart.h"
#include "Ogre.h"



GfxEngine::GfxEngine()
{
	m_oRoot = 0;
	m_sWindowTitle = "Default Title";
}

GfxEngine::~GfxEngine()
{
	if(m_oRoot) delete m_oRoot;
}

void GfxEngine::Enter(Timer * timer )
{
	CreateRoot();
	DefineResources();
	SetupRenderSystem();
	CreateRenderWindow(m_sWindowTitle);
	InitializeResourceGroups();
	SetupScene();
	StartRenderLoop();
}

void GfxEngine::Update()
{
	// Do naught it seems.
}

void GfxEngine::Exit()
{

}


GfxPart * GfxEngine::GeneratePart()
{
	GfxPart * newPart = new GfxPart();
	newPart->SetGfxEngineRef(this);
	return newPart;
}


void GfxEngine::CreateRoot()
{
	m_oRoot = new Ogre::Root;
}

void GfxEngine::DefineResources()
{
    Ogre::String secName, typeName, archName;
    Ogre::ConfigFile cf;
    cf.load("resources.cfg");

    Ogre::ConfigFile::SectionIterator seci = cf.getSectionIterator();
    while (seci.hasMoreElements())
    {
        secName = seci.peekNextKey();
        Ogre::ConfigFile::SettingsMultiMap *settings = seci.getNext();
        Ogre::ConfigFile::SettingsMultiMap::iterator i;
        for (i = settings->begin(); i != settings->end(); ++i)
        {
            typeName = i->first;
            archName = i->second;
            Ogre::ResourceGroupManager::getSingleton().addResourceLocation(archName, typeName, secName);
        }
    }
   
}

void GfxEngine::SetupRenderSystem()
{
	Ogre::RenderSystem *rs = m_oRoot->getRenderSystemByName("OpenGL Rendering Subsystem");

	m_oRoot->setRenderSystem(rs);
	rs->setConfigOption("Full Screen", "No");
	rs->setConfigOption("Video Mode", "800 x 600 @ 32-bit colour");
}

void GfxEngine::CreateRenderWindow(std::string windowName)
{
	m_oRoot->initialise(true,windowName.c_str());
}

void GfxEngine::InitializeResourceGroups()
{
	Ogre::TextureManager::getSingleton().setDefaultNumMipmaps(5);
	Ogre::ResourceGroupManager::getSingleton().initialiseAllResourceGroups();
}

void GfxEngine::SetupScene()
{
	Ogre::SceneManager *mgr = m_oRoot->createSceneManager(Ogre::ST_GENERIC, "Default SceneManager");
    Ogre::Camera *cam = mgr->createCamera("Camera");
    Ogre::Viewport *vp = m_oRoot->getAutoCreatedWindow()->addViewport(cam);
}

void GfxEngine::StartRenderLoop()
{
	m_oRoot->startRendering();
}

Ogre::Root * GfxEngine::GetOgreRoot()
{
	return m_oRoot;
}

void GfxEngine::SetWindowTitle(std::string newTitle)
{
	m_sWindowTitle = newTitle;
}
