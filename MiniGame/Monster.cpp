#include "Monster.h"



void Monster::DrawOnScreen()
{
	cout << "Monster ---> ";
	Creature::DrawOnScreen();
	cout << endl;
}

bool Monster::Attack(Creature *x)
{
	Player* playerPtr = dynamic_cast<Player*>(x);
	if (playerPtr == NULL)
	{
		delete playerPtr;
		return 0;
	}
	else
	{
		playerPtr = NULL;
		delete playerPtr;
		if (x->DecHealth(FirePower))
			return 1;
		else
			return 0;
	}


}