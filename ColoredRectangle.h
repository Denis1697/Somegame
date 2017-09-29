#pragma once
#include "Rectangle.h"
#include "ConsoleLib.h"

class ColoredRectangle : public Rectangle
{
private:
	ConsoleColor _borderColor;
	ConsoleColor _fillColor;
public:
	ColoredRectangle(Point TopLeft, Point BottomRight, ConsoleColor borderColor, ConsoleColor fillColor) 
		: Rectangle(TopLeft, BottomRight), _borderColor(borderColor), _fillColor(fillColor) {}

	ColoredRectangle(int topLeftX, int topLeftY, int bottomRightX, int bottomRightY, ConsoleColor borderColor, ConsoleColor fillColor)
		: Rectangle(topLeftX, topLeftY, bottomRightX, bottomRightY), _borderColor(borderColor), _fillColor(fillColor) {}

	ConsoleColor getBorderColor() { return _borderColor; }
	ConsoleColor getFillColor() { return _fillColor; }
	void setBorderColor(ConsoleColor borderColor) { _borderColor = borderColor; }
	void setFillColor(ConsoleColor fillColor) { _fillColor = fillColor; }

	void draw();
};