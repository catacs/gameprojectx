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

	gfxEngine.GetOgreRoot()->getSceneManager("Default SceneManager")->setAmbientLight(Ogre::ColourValue( 1, 1, 1 ));

	return 0;
}