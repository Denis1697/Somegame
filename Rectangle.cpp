#include "Rectangle.h"

Rectangle::Rectangle(Point TopLeft, Point BottomRight)
{
	_vertices = new Point[verticesCount];

	_vertices[RectangleVertex::TopLeft].setX(TopLeft.getX());
	_vertices[RectangleVertex::TopLeft].setY(TopLeft.getY());

	_vertices[RectangleVertex::BottomRight].setX(BottomRight.getX());
	_vertices[RectangleVertex::BottomRight].setY(BottomRight.getY());

	_vertices[RectangleVertex::TopRight].setX(BottomRight.getX());
	_vertices[RectangleVertex::TopRight].setY(TopLeft.getY());

	_vertices[RectangleVertex::BottomLeft].setX(TopLeft.getX());
	_vertices[RectangleVertex::BottomLeft].setY(BottomRight.getY());

	_width = BottomRight.getX() - TopLeft.getX();
	_height = BottomRight.getY() - TopLeft.getY();
}

Rectangle::Rectangle(int topLeftX, int topLeftY, int bottomRightX, int bottomRightY)
{
	_vertices = new Point[verticesCount];

	_vertices[TopLeft].setX(topLeftX);
	_vertices[TopLeft].setY(topLeftY);

	_vertices[BottomRight].setX(bottomRightX);
	_vertices[BottomRight].setY(bottomRightY);

	_vertices[TopRight].setX(bottomRightX);
	_vertices[TopRight].setY(topLeftY);

	_vertices[BottomLeft].setX(topLeftX);
	_vertices[BottomLeft].setY(bottomRightY);

	_width = bottomRightX - topLeftX;
	_height = bottomRightY - topLeftY;
}

void Rectangle::setVertices(Point * vertices)
{
	int size = sizeof(vertices) / sizeof(vertices[0]);

	if (size != verticesCount)
		return;

	_vertices = vertices;

	_width = _vertices[BottomRight].getX() - _vertices[TopLeft].getX();
	_height = _vertices[BottomRight].getY() - _vertices[TopLeft].getY();
}
