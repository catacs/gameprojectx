//MUST includes for every new State 
#include "State.h"
#include "FSM.h"
#include <string>

//The necessary includes that cotains the definitions of the classes you use in the declarations.
#include "Entity.h"
#include "GfxEngine.h"
#include "GfxPart.h"

//Define your class allways derivating from STATE
class SceneTestState:State
{
	Entity robotEntity;
	GfxPart *auxGfxPart;
	GfxEngine gfxEngine;

public:
	
	//The constructor must have a name for the state and the owner FSM the State will work with
	//This two parameters have to be passed to the base constructor
	SceneTestState(std::string name,FSM* fsm):State(name,fsm){};
	~SceneTestState(){};

	//This functions MUST be defined allways. Its names auto-explains their funtion.
	void Enter();
	void Update();
	void Exit();

};