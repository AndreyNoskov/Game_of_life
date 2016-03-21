#include "Field.h"
#include "Engines/Graph/GraphEngine.h"
#include "Engines/Graph/GE_OpenCV.h"
#include "Engines/Physic/PhysEngine.h"

#include <iostream>					//cout
#include <unistd.h>					//usleep

int main(int argc, char const *argv[])
{
	Field field(50, 50);			// создаем экземпляр поля
	//GraphEngine gEngine(&field);	// создаем экземпляр графического движка
	GE_OpenCV gEngine(&field);
	PhysEngine pEngine(&field);		// создаем экземпляр физического движка

	field.Generate(0);				// генерируем начальное состояние поля

	for(int n = 1; n <= 100; ++n)	// хотим видеть 100 итераций
	{
		gEngine.Process();			// одна итерация графического движка
		pEngine.Process();			// одна итерация физического движка
		std::cout << "Iteration: " << n << '\n';
		usleep(100000);				// ждем 0.1 секунду, а то очень быстро меняется картинка
	}

	return 0;
}