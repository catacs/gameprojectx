#include <iostream>
#include <stdlib.h>
#include "GfxEngine.h"
#include "Entity.h"
#include "Part.h"
#include "GfxPart.h"
#include "Ogre.h"
#include "iLog.h"

#include <pantheios/pan.hpp>
#include <pantheios/backends/bec.file.h>

using namespace std;

extern "C" const char PANTHEIOS_FE_PROCESS_IDENTITY[] = "PX";

#define WIN32_LEAN_AND_MEAN
#include "windows.h"

INT WINAPI WinMain(HINSTANCE hInst, HINSTANCE, LPSTR strCmdLine, INT)
{
	pantheios_be_file_setFilePath("ArchivoDeLog.txt");

	pantheios::log(pantheios::debug, "Entering main()");
	pantheios::log_DEBUG("debug");
	pantheios::log_INFORMATIONAL("informational");

	pan::log_NOTICE("notice");
	pantheios::log_WARNING("warning");
	pantheios::log_ERROR("error");
	pantheios::log_CRITICAL("critical");
	pantheios::log_ALERT("alert");
	pantheios::log_EMERGENCY("EMERGENCY");
	

	GfxEngine gfxEngine;
	gfxEngine.SetWindowTitle("Hola");
	gfxEngine.Enter(NULL);

	Entity robotEntity;

	GfxPart * auxGfxPart = gfxEngine.GeneratePart();
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

	GetLog().End();

	gfxEngine.StartRenderLoop();

	return 0;
}