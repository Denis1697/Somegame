#include "ColoredRectangle.h"

void ColoredRectangle::draw()
{
	register int i = this->getVertices()[TopLeft].getX(), 
				 j = this->getVertices()[TopLeft].getY(),
				 i2 = this->getVertices()[BottomRight].getX(),
				 j2 = this->getVertices()[BottomRight].getY();

	ChangeTextAttr(i, j, _borderColor, _borderColor, i2 - i);
	ChangeTextAttr(i, j2, _borderColor, _borderColor, i2 - i + 1);

	for (j; j < j2; j++)
	{
		ChangeTextAttr(i, j, _borderColor, _borderColor, 1);
		ChangeTextAttr(i2, j, _borderColor, _borderColor, 1);
	}

	j = this->getVertices()[TopLeft].getY();
	for (j; j < j2-1; j++)
		ChangeTextAttr(i + 1, j + 1, _borderColor, _fillColor, i2 - i - 1);
}
