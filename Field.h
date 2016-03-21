//
// Created by root on 21.03.16.
//

#ifndef CL_GAME_OF_LIFE_FIELD_H
#define CL_GAME_OF_LIFE_FIELD_H

class Field
{
public:
	Field(int _height, int _width);
	~Field();

	int GetWidth() const; 		// возвращаем длину
	int GetHeight() const;		// возвращаем высоту

	int GetValue(int i, int j) const;	// возвращаем значение в ячейке (i, j)
	int SetValue(int i, int j, int newValue); // устанавливаем значение в ячейке (i, j)

	void Generate(int value);	// тут описываем правило генерирования начального состояния
								// сейчас там генерируется крест на все поле

	bool Swap(Field* field);	// понять как работает этот метод и зачем он нужен!

private:
	Field();

	int** data;

	int height;
	int width;
};


#endif //CL_GAME_OF_LIFE_FIELD_H
