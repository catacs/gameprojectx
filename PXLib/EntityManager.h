#pragma once

class EntityMap;
class Entity;
class Timer;

class EntityManager
{
private:
	EntityMap* m_EntityMap;

public:

	EntityManager(void);
	~EntityManager(void);

	void Enter(Timer * timer);
	void Update();
	void End();

	Entity*		GetEntityByID(int id);
	EntityMap*	GetEntityMap();
	Entity*		AddEntityToMap(Entity* entity);
};


