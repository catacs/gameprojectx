#pragma once

#include <vector>
#include "MessageType.h"
#include "MessageRegister.h"

using namespace std;

class MessageRegistry
{
public:
	MessageRegistry(void);
	~MessageRegistry(void);
	vector<MessageRegister> m_vMessageRegistrations;
	MessageType m_MessageType;
	
};
