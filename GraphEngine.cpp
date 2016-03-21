//
// Created by root on 21.03.16.
//

#include <cstdlib>
#include <iostream>

#include "GraphEngine.h"

GraphEngine::GraphEngine()
{

}

GraphEngine::GraphEngine(const Field* _field)
{
	field = _field;
}

GraphEngine::~GraphEngine()
{

}

void GraphEngine::Process()
{

//	if (system("CLS"))
//		system("clear");

	system("clear");

	char c;

	for (int i = 0; i < field->GetWidth() + 2; ++i)
		std::cout << '-';
	std::cout << '\n';

	for (int i = 0; i < field->GetHeight(); ++i)
	{
		std::cout << '|';
		for (int j = 0; j < field->GetWidth(); ++j)
		{
			c = (field->GetValue(i,j) == 0) ? ' ' : 'X';
			std::cout << c;
		}
		std::cout << "|\n";
	}

	for (int i = 0; i < field->GetWidth() + 2; ++i)
		std::cout << '-';
	std::cout << '\n';
}