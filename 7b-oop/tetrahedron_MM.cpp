#include "tetrahedron.h"

using namespace std;

namespace simple_shapes 
{
	// �����������
	void tetrahedron::MultiMethod(shape *other, ofstream &ofst) 
	{
		other->MMTetrahedron(ofst);
	}}