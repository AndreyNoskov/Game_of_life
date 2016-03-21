//
// Created by root on 21.03.16.
//

#ifndef CL_GAME_OF_LIFE_PHYSENGINE_H
#define CL_GAME_OF_LIFE_PHYSENGINE_H

#include "Field.h"

class PhysEngine
{
public:
	PhysEngine(Field* _field);
	~PhysEngine();

	void Process();

private:
	PhysEngine();
	Field* field;
	Field local; // поймите зачем хранить экземпляр поля в физическом движке!

};


#endif //CL_GAME_OF_LIFE_PHYSENGINE_H
