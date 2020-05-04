#include "Player.h"
#include "Dragon.h"
#include "Monster.h"
#include "Creature.h"
#pragma once


class Game
{
private:
	Creature* creaturesList[100] = { NULL };
public:
	Game() {	};
	
	void AddCreature(Creature*);

	void drawAllCreatures();

	void MoveCreature(string CrtName, int x, int y);

	void Fight(Creature* pc1, Creature* pc2);

	void RemoveCreature(Creature *killedCrt);
};