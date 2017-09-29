#pragma once
#include "Rectangle.h"
#include "ConsoleLib.h"

class ColoredRectangle : public Rectangle
{
private:
	ConsoleColor _borderColor;
public:
	ColoredRectangle(Rectangle &rectangle, ConsoleColor borderColor) 
		: Rectangle(rectangle) { _borderColor = borderColor; }

	ColoredRectangle(Point TopLeft, Point BottomRight, ConsoleColor borderColor) 
		: Rectangle(TopLeft, BottomRight) { _borderColor = borderColor; }

	ColoredRectangle(int topLeftX, int topLeftY, int bottomRightX, int bottomRightY, ConsoleColor borderColor) 
		: Rectangle(topLeftX, topLeftY, bottomRightX, bottomRightY) { _borderColor = borderColor; }

	ConsoleColor getBorderColor() { return _borderColor; }
	void setBorderColor(ConsoleColor borderColor) { _borderColor = borderColor; }
};