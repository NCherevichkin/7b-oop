#ifndef SPHERE_H
#define SPHERE_H

#include "shape.h"

namespace simple_shapes 
{
	class sphere : public shape 
	{
		int rad; // радиус

	public:
		// переопределяем интерфейс класса
		void InData(ifstream &ifst);  // ввод
		void Out(ofstream &ofst);     // вывод 
		void MultiMethod(shape *other, ofstream &ofst);
		void MMBox(ofstream &ofst);
		void MMSphere(ofstream &ofst);
		void MMTetrahedron(ofstream &ofst);
		sphere() {} // создание без инициализации.
	};
} // end simple_shapes namespace
#endif
