#ifndef TETRAHEDRON_H
#define TETRAHEDRON_H

#include "shape.h"

namespace simple_shapes 
{
	
	class tetrahedron : public shape 
	{
		int a; // ����� ����� 
	public:
		// �������������� ��������� ������
		void InData(ifstream &ifst);  // ����
		void Out(ofstream &ofst);     // ����� 
		void MultiMethod(shape *other, ofstream &ofst);
		void MMBox(ofstream &ofst);
		void MMSphere(ofstream &ofst);
		void MMTetrahedron(ofstream &ofst);
		tetrahedron() {} // �������� ��� �������������.
	};
} // end simple_shapes namespace
#endif