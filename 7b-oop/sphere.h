#ifndef SPHERE_H
#define SPHERE_H

#include "shape.h"

namespace simple_shapes 
{
	class sphere : public shape 
	{
		int rad; // ������

	public:
		// �������������� ��������� ������
		void InData(ifstream &ifst);  // ����
		void Out(ofstream &ofst);     // ����� 
		void MultiMethod(shape *other, ofstream &ofst);
		void MMBox(ofstream &ofst);
		void MMSphere(ofstream &ofst);
		void MMTetrahedron(ofstream &ofst);
		sphere() {} // �������� ��� �������������.
	};
} // end simple_shapes namespace
#endif
