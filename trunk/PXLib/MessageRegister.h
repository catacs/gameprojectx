#pragma once

class Callback;

class MessageRegister
{
public:
	int m_iEntityID;
	Callback*  m_Callback;
	MessageRegister(void);
	~MessageRegister(void);
};
