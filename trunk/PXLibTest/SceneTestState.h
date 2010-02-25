#include "State.h"
#include "FSM.h"
#include <string>

#include "Entity.h"
#include "GfxEngine.h"
#include "GfxPart.h"

class Entity;
class GfxPart;
class GfxEngine;

class SceneTestState:State
{
	Entity robotEntity;
	GfxPart *auxGfxPart;
	GfxEngine gfxEngine;

public:
	
	SceneTestState(std::string name,FSM* fsm):State(name,fsm){};
	~SceneTestState(){};

	void Enter();
	void Update();
	void Exit();

};