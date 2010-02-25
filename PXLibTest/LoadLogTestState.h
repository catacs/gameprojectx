#include "State.h"
#include <string>
#include "FSM.h"

class LoadLogTestState:State
{

public:
	
	LoadLogTestState(std::string name,FSM* fsm):State(name,fsm){};
	~LoadLogTestState(){};

	void Enter();
	void Update();
	void Exit();

};