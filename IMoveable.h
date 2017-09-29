#pragma once

class IMoveable
{
	virtual void goUp() = 0;
	virtual void goDown() = 0;
	virtual void goLeft() = 0;
	virtual void goRight() = 0;
};