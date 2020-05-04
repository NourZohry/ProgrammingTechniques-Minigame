#include "Player.h"

bool Player::Attack(Creature *x)
{
	if (x->DecHealth(2 * FirePower))
		return 1;
	return 0;
}

void Player:: DrawOnScreen()
{
	cout << "Player ---> ";
	Creature::DrawOnScreen();
	cout << endl;
}