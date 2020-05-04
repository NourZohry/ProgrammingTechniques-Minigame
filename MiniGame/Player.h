#include "Creature.h"
#pragma once

class Player :public Creature
{
private:
public:
	Player(string iName, int x, int y, int Hlth, int Fpwr) :Creature(iName, x, y, Hlth, Fpwr)
	{}
	bool Attack(Creature *);

	void DrawOnScreen();
};