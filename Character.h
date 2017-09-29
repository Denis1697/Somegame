#pragma once
#include <string>
#include "IMoveable.h"

class Character : public IMoveable
{
protected:
	char * _name;
	int _HP;
	float _attackDamage;
	int _intelligence;
	int _strength;
	int _agility;

public:
	Character(char * name = nullptr, int HP = 10, float attackDamage = 1) { setName(name); _HP = HP; _attackDamage = attackDamage; }
	Character(char * name = nullptr, int HP = 10, float attackDamage = 1, int I = 3, int S = 3, int A = 3) { setName(name); _HP = HP; _attackDamage = attackDamage; }

	void setName(char * name);
	void setHP(int HP) { _HP = HP; }
	void setAttackDamage(float attackDamage) 
	{ 
		_attackDamage = 
		attackDamage + 
		((float)_intelligence * 0.3) +  
		((float)_strength * 0.3) + 
		((float)_agility * 0.3); 
	}

	const char * getName() { return this->_name; }
	const int getHP() { return this->_HP; }
	const float getAttackDamage() { return this->_attackDamage; }

	virtual int attack() = 0;
};