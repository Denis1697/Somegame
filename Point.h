#pragma once
#include <cstdio>
#include <cstdlib>

class Point
{
private:
	int _x;
	int _y;
public:
	Point() { _x = 0; _y = 0; }
	Point(int x, int y) { _x = x; _y = y; }

	void setY(int y) { _y = y; }
	void setX(int x) { _x = x; }

	int getY() { return _y; }
	int getX() { return _x; }
};