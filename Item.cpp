#include "Item.h"

void Item::setName(char * name)
{
	if (_name != nullptr)
	{
		delete(_name);
		_name = nullptr;
	}

	_name = new char[strlen(name) + 1];
	strcpy(_name, name);
}

bool Item::operator==(const Item & item)
{
	return (!strcmp(_name, item._name) && _weight == item._weight && _price == item._price);
}
