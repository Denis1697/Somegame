#pragma once
#include "ColoredRectangle.h"

class Field 
{
private:
	ColoredRectangle * _gameField;
public:
	Field() { _gameField = new ColoredRectangle(0, 0, 1, 1, Blue); _gameField->draw(); }
	Field(ColoredRectangle * gameField) { _gameField = gameField; _gameField->draw(); }
};