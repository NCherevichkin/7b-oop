#ifndef BOX_H
#define BOX_H

#include "shape.h"

namespace simple_shapes 
{
	// ��������������
	class box : public shape 
	{
		int x, y, z; // ������, ������, �����

	public:
		// �������������� ��������� ������
		void InData(ifstream &ifst);  // ����
		void Out(ofstream &ofst);    // ����� 
		void MultiMethod(shape *other, ofstream &ofst);
		void MMBox(ofstream &ofst);
		void MMSphere(ofstream &ofst);
		void MMTetrahedron(ofstream &ofst);
		box() {} // �������� ��� �������������.
	};
} // end simple_shapes namespace
#endif