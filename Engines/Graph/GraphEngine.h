//
// Created by root on 21.03.16.
//

#ifndef CL_GAME_OF_LIFE_GRAPHENGINE_H
#define CL_GAME_OF_LIFE_GRAPHENGINE_H

#include "../../Field.h"

class GraphEngine
{
public:
	GraphEngine(const Field* _field);
	~GraphEngine();

	void Process();

private:
	GraphEngine();

protected:
	const Field* field;
};


#endif //CL_GAME_OF_LIFE_GRAPHENGINE_H
