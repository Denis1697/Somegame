#pragma once
#include "Character.h"

class Mage : public Character
{
private:

public:
	Mage(char * name, int HP, int attackDamage) : Character(name, HP, attackDamage) 
	{ 
		_intelligence = 7; 
		_strength = 2; 
		_agility = 3; 

		_attackDamage = 
			attackDamage + 
			((float)_intelligence * 0.9) + 
			((float)_agility * 0.1) + 
			((float)_strength * 0.1);
	}
};