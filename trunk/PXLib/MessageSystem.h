#pragma once

#include <vector>
#include <map>

#include "System.h"
#include "Singleton.h"
#include "MessageType.h"

using namespace std;

class Timer;
class MessageRegistry;
class MsgPart;
class Callback;
class Message;

class MessageSystem: public System, Singleton<MessageSystem>
{
public:
	void Enter(Timer * timer);
	void Update();
	void Exit();

    void AddMessageToSystem(MessageType type);
    int RegisterForMessage(MessageType msgType, int entityID, Callback * callBack);
    void UnRegisterForMessage(MessageType msgType, int entityID);
    void SendMessage(Message* newMessage);

   int  m_uniqueID;
   int  GetUniqueMessageID(){return m_uniqueID++;}    

   MsgPart * GeneratePart();
    
protected:
    MessageSystem();
  

private:
	friend class Singleton<MessageSystem>;
	vector<Message> m_vMessageQueue;
	map<MessageType, MessageRegistry> m_mMessageTypes;
};

#define MesSys Singleton<MessageSystem>::GetInstance()