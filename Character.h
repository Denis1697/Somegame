#pragma once
#include <string>

class Character
{
private:
	char * _name;
	int _HP;
	int _attackDamage;
public:
	Character(char * name = nullptr, int HP = 10, int attackDamage = 1) { setName(name); _HP = HP; _attackDamage = attackDamage; }

	void setName(char * name);
	void setHP(int HP) { _HP = HP; }
	void setAttackDamage(int attackDamage) { _attackDamage = attackDamage; }

	const char * getName() { return this->_name; }
	int getHP() { return this->_HP; }
	int getAttackDamage() { return this->_attackDamage; }
}