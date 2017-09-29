#include "Inventory.h"


bool Inventory::dropItem(Item item)
{
	std::vector<Item>::iterator it = std::find(_inventory->begin(), _inventory->end(), item);

	if (it == _inventory->begin)
		return false;
	
	_inventory->erase(it);
	return true;
}

bool Inventory::dropItem(int index)
{
	if (_inventory->size - 1 < index)
		return false;

	_inventory->erase(_inventory->begin() + index); 
	return true;
}

const Item * Inventory::getItem(int index)
{
	if (_inventory->size - 1 < index)
		return nullptr;

	return &*(_inventory->begin() + index);
}

const void Inventory::sortBy(sortOrder order)
{
	qsort(_inventory, _inventory->size(), sizeof(Item), [](const void * a, const void * b)->int {
			Item arg1 = *static_cast<const Item *>(a);
			Item arg2 = *static_cast<const Item *>(b);

			//TODO:
			//fix lambda constraint
			sortOrder order = sortOrder::byName;

			switch (order)
			{
			case sortOrder::byWeight:
				return arg1.getWeight() - arg2.getWeight();
			case sortOrder::byPrice:
				return arg1.getPrice() - arg2.getPrice();
			case sortOrder::byName:
				return strcmp(arg1.getName(), arg2.getName());
			}
		}
	);
}
