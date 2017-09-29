#pragma once
#include <vector>
#include <algorithm>
#include "Item.h"

enum sortOrder { byPrice = 0, byWeight = 1, byName = 2 };

class Inventory
{
private:
	std::vector<Item> * _inventory;
public:
	Inventory() : Inventory(10) {}
	Inventory(int size) { _inventory = new std::vector<Item>(size); }

	const int getSize() { return _inventory->size(); }
	const std::vector<Item> * const getInventory() { return _inventory; }

	void setInventory(std::vector<Item> * inventory) { _inventory = inventory; }

	void addItem(Item item) { _inventory->push_back(item); }
	bool dropItem(Item item);
	bool dropItem(int index);
	const Item * getItem(int index);

	const void sortBy(sortOrder order);
};