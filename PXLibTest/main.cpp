#include <iostream>
#include <stdlib.h>

#include "FSM.h"
#include "SceneTestState.h"
#include "LoadLogTestState.h"

using namespace std;

#define WIN32_LEAN_AND_MEAN
#include "windows.h"


INT WINAPI WinMain(HINSTANCE hInst, HINSTANCE, LPSTR strCmdLine, INT)
{

	FSM *StateMachine= new FSM();
	SceneTestState stScene("Scene Warrior Test State",StateMachine);
	LoadLogTestState stLoadLog("Log Loader",StateMachine);

	StateMachine->Enter(NULL ,(State*)&stLoadLog);

	StateMachine->ChangeState((State*)&stScene);

	StateMachine->Update();

	StateMachine->Exit();

	return 0;
}