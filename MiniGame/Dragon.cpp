#include "Dragon.h"

bool Dragon::Attack(Creature *x)
{
	if (CanFire)
	{
		if (x->DecHealth(age / 5 + FirePower))
			return 1;
	}
	return 0;
}

void Dragon::DrawOnScreen()
{
	cout << "Dragon ---> ";
	Creature::DrawOnScreen();
	cout << ", Age = " << age;
	if (CanFire)
		cout << ", can fire!";
	else
		cout << "CAN'T fire!";
	cout << endl;
}