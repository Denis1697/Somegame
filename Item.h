#pragma once
#include <string>

class Item
{
private:
	char * _name;
	double _weight;
	int _price;
public:
	Item(char * name = nullptr, double weight = 1.0, int price = 1) { setName(name); _weight = weight; _price = price };
	~Item() { delete(_name); _name = nullptr; delete(this); }

	void setName(char * name);
	void setWeight(double weight) {	_weight = weight; }
	void setPrice(int price) { _price = price; }

	const char * getName() { return _name; }
	const double getWeight() { return _weight; }
	const double getPrice() { return _price; }

	bool Item::operator==(const Item &item);
};