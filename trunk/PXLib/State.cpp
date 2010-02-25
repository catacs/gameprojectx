#include "State.h"
#include "FSM.h"
#include <string>
#include <pantheios/pan.hpp>
#include <pantheios/backends/bec.file.h>

State::State(std::string Name,FSM *fsm)
{
	m_Name=Name;
	m_FSMowner=fsm;
	if(!fsm) pantheios::log_WARNING("State: You aren't assinging any FSM to the state: \"%s\". This could cause some problems.",m_Name);
}

std::string State::getName()
{
	return m_Name;
}

FSM* State::getFSMowner()
{
	return m_FSMowner;
}