#include "box.h"

using namespace std;

namespace simple_shapes 
{
	// мультиметод
	void box::MultiMethod(shape *other,	ofstream &ofst) 
	{
		other->MMBox(ofst);
	}}