#include "Creature.h"
#include "Player.h"
#pragma once

class Monster : public Creature
{
private:
public:
	Monster(string iName, int x, int y, int Hlth, int Fpwr) :Creature(iName, x, y, Hlth, Fpwr)
	{}
	bool Attack(Creature *);

	void DrawOnScreen();
};