#pragma once
#include "Point.h"

enum RectangleVertex { TopLeft = 0, TopRight = 1, BottomLeft = 2, BottomRight = 3 };

class Rectangle
{
private:
	const int verticesCount = 4;

	int _width;
	int _height;
	Point * _vertices;
public:
	Rectangle(Rectangle &rectangle);
	Rectangle(Point TopLeft, Point BottomRight);
	Rectangle(int topLeftX, int topLeftY, int bottomRightX, int bottomRightY);

	const Point * getVertices() { return _vertices; }
	void setVertices(const Point * vertices);
};