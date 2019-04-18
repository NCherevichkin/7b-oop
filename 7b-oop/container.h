#ifndef CONTAINER_H
#define CONTAINER_H

#include "shape.h"

namespace simple_shapes 
{
	// ���������� ��������� �� ������ ����������� �������
	class container 
	{
		enum { max_len = 100 }; // ������������ �����
		int len; // ������� �����
		shape *cont[max_len];

	public:
		void In(ifstream &ifst);     // ���� 
		void Out(ofstream &ofst);    // ����� 
		void MultiMethod(ofstream &ofst); // �����������
		void Clear();  // ������� ���������� �� �����
		container();    // ������������� ����������
		~container() { Clear(); } // ���������� ����������
	};
} // end simple_shapes namespace
#endif

