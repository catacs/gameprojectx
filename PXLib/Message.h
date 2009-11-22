#pragma once

#include "MessageType.h"

class Message
{
public:
	MessageType m_Type;
	int m_iFromID;
	int m_iToID;
	float m_fDelay;
	bool m_bDelivered;

	Message(MessageType type);
	Message(MessageType type, int from, int to, float delay);
	~Message();
};