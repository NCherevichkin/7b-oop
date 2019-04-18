#include "sphere.h"

using namespace std;

namespace simple_shapes 
{
	// мультиметод
	void sphere::MultiMethod(shape *other, ofstream &ofst) 
	{
		other->MMSphere(ofst);
	}}