#include <iostream>
#include <vector>

#include "Entity.h"
#include "Part.h"
#include "Vector3.h"
#include "Timer.h"

using namespace std;

Entity::Entity(void)
{
}

Entity::~Entity(void)
{
}

int Entity::GetID()
{
	return m_iID;
}
void Entity::SetID(int id)
{
	m_iID = id;
}

void Entity::PlayerControl()
{
	m_bPlayerControlled = true;
}
void Entity::PlayerRelease()
{
	m_bPlayerControlled = false;
}
bool Entity::IsControlled()
{
	return m_bPlayerControlled;
}

void Entity::AddPart(Part* part)
{
	m_vParts.push_back(part);
	part->Enter(NULL, this);
}
void Entity::GetPartByType(Part::PartType type)
{

}

void Entity::CheckIfHasPart(Part::PartType type)
{

}
