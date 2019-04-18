#ifndef SHAPE_H
#define SHAPE_H

#include <fstream>

using namespace std;

namespace simple_shapes 
{
	class shape 
	{
	public:
		// иденитфикация, порождение и ввод фигуры из пото-ка
		static  shape* In(ifstream &ifst);
		virtual void InData(ifstream &ifst) = 0;  
		virtual void Out(ofstream &ofst) = 0;     
		// мультиметод
		virtual void MultiMethod(shape *other, ofstream &ofst) = 0;
		virtual void MMBox(ofstream &ofst) = 0;
		virtual void MMSphere(ofstream &ofst) = 0;
		virtual void MMTetrahedron(ofstream &ofst) = 0;
	};
} // end simple_shapes namespace
#endif
