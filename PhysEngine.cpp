//
// Created by root on 21.03.16.
//

#include "PhysEngine.h"

PhysEngine::PhysEngine()
		: local(0,0)
{

}

PhysEngine::PhysEngine(Field* _field)
		: local(_field->GetHeight(), _field->GetWidth()) // разобраться с этой конструкцией!
{
	field = _field;
}

void PhysEngine::Process()
{
	for (int i = 1; i < field->GetHeight() - 1; ++i)
		for (int j = 1; j < field->GetWidth() - 1; ++j)
		{
			int count = 0;
			for (int p = -1; p <= 1; ++p)
				for (int q = -1; q <= 1 ; ++q)
				{
					if ( p == 0 && q == 0 ) continue;
					count += field->GetValue(i+p, j+q);
				}
			switch (field->GetValue(i,j))
			{
				// тут поизменяйте циферки и посмотрите как меняется поведение
				case 0:
					(count == 3) ? local.SetValue(i,j,1) : local.SetValue(i,j,0);
					break;
				case 1:
					(count < 2 || count > 3) ? local.SetValue(i,j,0) : local.SetValue(i,j,1);
					break;
			}
		}
	local.Swap(field);
}

PhysEngine::~PhysEngine()
{

}