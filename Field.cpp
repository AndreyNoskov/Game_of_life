//
// Created by root on 21.03.16.
//

#include "Field.h"

Field::Field()
{

}

Field::Field(int _height, int _width)
{
	height = _height;
	width = _width;
	data = new int* [height];
	for (int i = 0; i < height; ++i)
		data[i] = new int[width];
}

int Field::GetWidth() const
{
	return width;
}

int Field::GetHeight() const
{
	return height;
}

Field::~Field()
{
	for (int i = 0; i < height; ++i)
		delete [] data[i];
	delete [] data;
}

int Field::GetValue(int i, int j) const
{
	if (((i >= 0) && (i < height)) &&
		((j >= 0) && (j < width )))
		return data[i][j];
	else
		return -1;
}

int Field::SetValue(int i, int j, int newValue)
{
	if (((i >= 0) && (i < height)) &&
		((j >= 0) && (j < width)) &&
		((newValue == 1) || (newValue == 0)))
	{
		data[i][j] = newValue;
		return 0;
	}
	else
		return -1;
}

void Field::Generate(int value)
{
	for (int i = 0; i < height; ++i)
		for (int j = 0; j < width; ++j)
		{
			if (i == 0 || j == 0 || i == height - 1 || j == width - 1)
				data[i][j] = 0;
			else
				data[i][j] = (i == j || i == width - j - 1) ? 1 : 0;
		}

}

bool Field::Swap(Field* field)
{
	if (width == field->GetWidth() && height == field->GetHeight())
	{
		int** tmp = field->data;
		field->data = data;
		data = tmp;
		return false;
	}
	else
		return true;
}

