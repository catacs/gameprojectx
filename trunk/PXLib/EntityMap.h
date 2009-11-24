#pragma once

#include <map>

#define EntityMapPair pair<map<int, Entity*>::iterator,bool>
#define EntityMapIterator map<int, Entity*>::iterator
#define EntityMapCIterator map<int, Entity*>::const_iterator
#define EntityMapRIterator map<int, Entity*>::reverse_iterator

using namespace std;

class Entity;

class EntityMap
{
private:
	map<int, Entity*> m_mEntitiesMap;
	int m_iContID;

public:
	EntityMap();
	~EntityMap();
	void UpdateID();

	Entity* GetEntityByID(int id);
	int GetTotalEntities();
	
};