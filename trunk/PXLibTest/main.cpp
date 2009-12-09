#include <iostream>
#include <stdlib.h>
#include "GfxEngine.h"
#include "Entity.h"
#include "Part.h"
#include "GfxPart.h"
#include "Ogre.h"

#define WIN32_LEAN_AND_MEAN
#include "windows.h"

INT WINAPI WinMain(HINSTANCE hInst, HINSTANCE, LPSTR strCmdLine, INT)
{
	GfxEngine gfxEngine;
	gfxEngine.SetWindowTitle("Hola");
	gfxEngine.Enter(NULL);

	Entity robotEntity;

	GfxPart * auxGfxPart = gfxEngine.GeneratePart();
	robotEntity.AddPart(auxGfxPart);

	auxGfxPart->AddAvatar("robot.mesh");

	gfxEngine.GetOgreRoot()->getSceneManager("Default SceneManager")->getCamera("Camera")->setNearClipDistance(5);
	gfxEngine.GetOgreRoot()->getSceneManager("Default SceneManager")->getCamera("Camera")->setFarClipDistance(1000);
	gfxEngine.GetOgreRoot()->getSceneManager("Default SceneManager")->getCamera("Camera")->setAspectRatio(Ogre::Real(1.3333));
	gfxEngine.GetOgreRoot()->getSceneManager("Default SceneManager")->getCamera("Camera")->setPosition(200,20,200);
	gfxEngine.GetOgreRoot()->getSceneManager("Default SceneManager")->getCamera("Camera")->lookAt(Ogre::Vector3(0,0,0));

	gfxEngine.GetOgreRoot()->getSceneManager("Default SceneManager")->setAmbientLight(Ogre::ColourValue( 1, 1, 1 ));
	gfxEngine.GetOgreRoot()->getSceneManager("Default SceneManager")->setWorldGeometry("terrain.cfg");
	gfxEngine.GetOgreRoot()->getSceneManager("Default SceneManager")->setSkyBox(true, "Examples/SpaceSkyBox");

	return 0;
}