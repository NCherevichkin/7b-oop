#include "sphere.h"

using namespace std;

namespace simple_shapes 
{
	// ���� ���������� ����
	void sphere::InData(ifstream &ifst)
	{
		ifst >> rad;
	}
} // end simple_shapes namespace

using namespace std;

namespace simple_shapes 
{
	// ����� ���������� ����
	void sphere::Out(ofstream &ofst)
	{
		ofst << "It is Sphere: r = "
			<< rad << endl;
	}
} // end simple_shapes namespace
