#ifndef TETRAHEDRON_H
#define TETRAHEDRON_H

#include "shape.h"

namespace simple_shapes 
{
	
	class tetrahedron : public shape 
	{
		int a; // длина ребра 
	public:
		// переопределяем интерфейс класса
		void InData(ifstream &ifst);  // ввод
		void Out(ofstream &ofst);     // вывод 
		void MultiMethod(shape *other, ofstream &ofst);
		void MMBox(ofstream &ofst);
		void MMSphere(ofstream &ofst);
		void MMTetrahedron(ofstream &ofst);
		tetrahedron() {} // создание без инициализации.
	};
} // end simple_shapes namespace
#endif