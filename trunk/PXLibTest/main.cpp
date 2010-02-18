#include <iostream>
#include <stdlib.h>
#include "GfxEngine.h"
#include "Entity.h"
#include "Part.h"
#include "GfxPart.h"
#include "Ogre.h"
#include "iLog.h"


#define WIN32_LEAN_AND_MEAN
#include "windows.h"

INT WINAPI WinMain(HINSTANCE hInst, HINSTANCE, LPSTR strCmdLine, INT)
{

	GetLog().Init();

	LOGGL1 << "LOGGL1Text to be logged and will show alwais LOG_Unknown" << WRITEL1( LOG_Unknown );
	LOGGL1 << "LOGGL1Text to be logged and will show alwais LOG_Error  " << WRITEL1( LOG_Error    );
	LOGGL1 << "LOGGL1Text to be logged and will show alwais LOG_Warning" << WRITEL1( LOG_Warning );
	LOGGL1 << "LOGGL1Text to be logged and will show alwais LOG_Comment" << WRITEL1( LOG_Comment );
	LOGGL1 << "LOGGL1Text to be logged and will show alwais LOG_Event  " << WRITEL1( LOG_Event    );
	LOGGL1 << "LOGGL1Text to be logged and will show alwais LOG_Debug  " << WRITEL1( LOG_Debug    );
	LOGGL1 << "LOGGL1Text to be logged and will show alwais LOG_Message" << WRITEL1( LOG_Message );

	LOGGL2 << "LOGGL2Text to be logged and will show alwais LOG_Unknown" << WRITEL2( LOG_Unknown );
	LOGGL2 << "LOGGL2Text to be logged and will show alwais LOG_Error  " << WRITEL2( LOG_Error    );
	LOGGL2 << "LOGGL2Text to be logged and will show alwais LOG_Warning" << WRITEL2( LOG_Warning );
	LOGGL2 << "LOGGL2Text to be logged and will show alwais LOG_Comment" << WRITEL2( LOG_Comment );
	LOGGL2 << "LOGGL2Text to be logged and will show alwais LOG_Event  " << WRITEL2( LOG_Event    );
	LOGGL2 << "LOGGL2Text to be logged and will show alwais LOG_Debug  " << WRITEL2( LOG_Debug    );
	LOGGL2 << "LOGGL2Text to be logged and will show alwais LOG_Message" << WRITEL2( LOG_Message );

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