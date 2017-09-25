#include "Character.h"
void Character::setName(char * name)
{
	if (_name != nullptr)
	{
		delete(_name);
		_name = nullptr;
	}

	_name = new char[strlen(name) + 1];
	strcpy(_name, name);
}
