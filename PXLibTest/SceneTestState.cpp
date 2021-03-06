#include "SceneTestState.h"
#include "GfxEngine.h"
#include "Entity.h"
#include "Part.h"
#include "GfxPart.h"
#include "Ogre.h"

void SceneTestState::Enter()
{
	gfxEngine.SetWindowTitle("Hola");
	gfxEngine.Enter(NULL);
	
	auxGfxPart = gfxEngine.GeneratePart();
	robotEntity.AddPart(auxGfxPart);

	auxGfxPart->AddAvatar("ninja.mesh");

	gfxEngine.GetOgreRoot()->getSceneManager("Default SceneManager")->getCamera("Camera")->setNearClipDistance(5);
	gfxEngine.GetOgreRoot()->getSceneManager("Default SceneManager")->getCamera("Camera")->setFarClipDistance(1000);
	gfxEngine.GetOgreRoot()->getSceneManager("Default SceneManager")->getCamera("Camera")->setAspectRatio(Ogre::Real(1.3333));
	gfxEngine.GetOgreRoot()->getSceneManager("Default SceneManager")->getCamera("Camera")->setPosition(500,500,500);
	gfxEngine.GetOgreRoot()->getSceneManager("Default SceneManager")->getCamera("Camera")->lookAt(Ogre::Vector3(0,0,0));

	gfxEngine.GetOgreRoot()->getSceneManager("Default SceneManager")->setAmbientLight(Ogre::ColourValue( 1, 1, 1 ));
	//gfxEngine.GetOgreRoot()->getSceneManager("Default SceneManager")->setWorldGeometry("terrain.cfg");
	gfxEngine.GetOgreRoot()->getSceneManager("Default SceneManager")->setSkyBox(true, "Examples/SpaceSkyBox");
}

void SceneTestState::Update()
{
	gfxEngine.StartRenderLoop();
}

void SceneTestState::Exit()
{
	gfxEngine.Exit();
}