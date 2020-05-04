#include "Monster.h"
#pragma once

class Dragon : public Monster
{
private:
	int age;
	bool CanFire;
public:
	Dragon(string iName, int ag, int x, int y, int Hlth, int Fpwr) : Monster(iName, x, y, Hlth, Fpwr)
	{
		age = ag;
		CanFire = (age > 10) ? 1 : 0;
	}
	bool Attack(Creature *);

	void DrawOnScreen();
};