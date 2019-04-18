#ifndef BOX_H
#define BOX_H

#include "shape.h"

namespace simple_shapes 
{
	// параллелепипед
	class box : public shape 
	{
		int x, y, z; // ширина, высота, длина

	public:
		// переопределяем интерфейс класса
		void InData(ifstream &ifst);  // ввод
		void Out(ofstream &ofst);    // вывод 
		void MultiMethod(shape *other, ofstream &ofst);
		void MMBox(ofstream &ofst);
		void MMSphere(ofstream &ofst);
		void MMTetrahedron(ofstream &ofst);
		box() {} // создание без инициализации.
	};
} // end simple_shapes namespace
#endif