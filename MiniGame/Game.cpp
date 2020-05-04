#include "Game.h"


void Game::AddCreature(Creature* x)
{
	for (int i = 0; i < 100; i++)
	{
		if (creaturesList[i] == NULL)
		{
			creaturesList[i] = x;
			return;
		}
	}
}

void Game::drawAllCreatures()
{
	cout << "============Alive Creatures============" << endl;
	int i = 0;
	while (creaturesList[i] != 0 || creaturesList[i] != NULL)
	{
		creaturesList[i]->DrawOnScreen();
		i++;
	}
}

void Game::MoveCreature(string CrtName, int x, int y)
{
	int i = 0;
	while (i < 100)
	{
		if (creaturesList[i]->getName() == CrtName)
		{
			creaturesList[i]->move(x, y);
			break;
		}
		i++;
	}
	for (int j = 0; j < 100; j++)
	{
		if (creaturesList[j] == NULL) return;
		if (creaturesList[j]->SamePosition(x, y) && creaturesList[j] != creaturesList[i])
		{
			Fight(creaturesList[i], creaturesList[j]);
		}
	}
}

void Game::Fight(Creature* pc1, Creature* pc2)
{

	while (1)
	{
		if (pc1->Attack(pc2))
		{
			RemoveCreature(pc2);
			drawAllCreatures();
			cout << endl;
			return;
		}
		else if (pc2->Attack(pc1))
		{
			RemoveCreature(pc1);
			drawAllCreatures();
			cout << endl;
			return;
		}
		drawAllCreatures();
		cout << endl;
	}
	cout << endl;
}

void Game::RemoveCreature(Creature *killedCrt)
{
	cout << "Creature " << killedCrt->getName() << " is KILLED!!!" << endl;
	for (int i = 0; i < 100; i++)
	{
		if (creaturesList[i]->getName() == killedCrt->getName())
		{
			for (int j = i; j < 99; j++)
			{
				creaturesList[j] = creaturesList[j + 1];
			}
			return;
		}
	}
}
