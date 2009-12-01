#pragma once

#include <string>
#include <vector>

#include "Part.h"

using namespace std;

class Vector3;
class Timer;

class Entity
{
private:
	int m_iID;
	string m_sName;
	bool m_bPlayerControlled;
	
	Vector3 * m_Position;
	vector<Part*> m_vParts;

public:

	Entity(void);
	~Entity(void);

	virtual void Enter(Timer * timer){}
	virtual void Update(){}
	virtual void Exit(){}

	int GetID();
	void SetID(int id);

	void PlayerControl();
	void PlayerRelease();
	bool IsControlled();

	void AddPart(Part* part);
	void GetPartByType(Part::PartType type);
	void CheckIfHasPart(Part::PartType type);

};
