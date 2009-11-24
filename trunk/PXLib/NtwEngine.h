#pragma once

#include <string>

#include "RakNetworkFactory.h"
#include "RakPeerInterface.h"
#include "MessageIdentifiers.h"
#include "RakNetTypes.h"
#include "BitStream.h"

class Timer;
class NtwPart;	

#define MAX_CLIENTS 16
#define PXE_PORT  60000
#define PXE_PORTC 60001

typedef void (* Recieve_Function)(RakNet::BitStream &b);

enum {NTW_NONE_MODE = -1, NTW_CLIENT_MODE, NTW_SERVER_MODE};

enum 
{
	ID_PX_ENGINE_MESSAGE = ID_USER_PACKET_ENUM,
	ID_USER_MESSAGE
// More enums....
};

using namespace std;

class NtwEngine
{
public:
	NtwEngine(void);
	~NtwEngine(void);

	void StartNwtMode(int mode, Recieve_Function f);
	void Connect(string ip);
	void Connect(string ip, int port); // For testing mainlly
	void Send(RakNet::BitStream &bs, PacketReliability reliability);
	void ChangeDefaultPort(int newport);
	int  NtwMode();

	void Enter(Timer * timer);
	void Update();
	void Exit();


	NtwPart* GeneratePart(); 
};
