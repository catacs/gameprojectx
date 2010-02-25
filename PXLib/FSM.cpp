#include "FSM.h"
#include "State.h"
#include "Timer.h"

#include <pantheios/pan.hpp>
#include <pantheios/backends/bec.file.h>

FSM::FSM(void)
{
	m_stCurrent=0;
}

FSM::~FSM(void)
{

}

void FSM::Enter(Timer * timer, State* InitialState)
{
	pantheios::log_INFORMATIONAL("FSM: Starting...");

	if(InitialState!=0) ChangeState(InitialState);

	pantheios::log_INFORMATIONAL("FSM: Started.");
}

void FSM::Update()
{
	if(m_stCurrent) m_stCurrent->Update();
}

void FSM::Exit()
{
	pantheios::log_INFORMATIONAL("FSM: Shutdowning...");

	if(m_stCurrent) m_stCurrent->Exit();

	pantheios::log_INFORMATIONAL("FSM: Shutdown.");
}

void FSM::ChangeState(State *newstate)
{
	if(m_stCurrent)pantheios::log_INFORMATIONAL("FSM: Changing State from: \"",m_stCurrent->getName(),"\" to: \"",newstate->getName(),"\" .");
	else pantheios::log_INFORMATIONAL("FSM: Changing State to: \"",newstate->getName(),"\" .");

	if(m_stCurrent)m_stCurrent->Exit();
	m_stCurrent=newstate;
	m_stCurrent->Enter();

	pantheios::log_INFORMATIONAL("FSM: Changed State to: \"",m_stCurrent->getName(),"\" .");
}