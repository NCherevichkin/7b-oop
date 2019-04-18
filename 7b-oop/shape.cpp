#include "box.h"
#include "sphere.h"
#include "tetrahedron.h"
#include "shape.h"

using namespace std;

namespace simple_shapes 
{
	// ¬вод параметров обобщенной фигуры 
	shape* shape::In(ifstream &ifst) {
		shape *sp;
		int k;
		ifst >> k;
		switch (k) {
		case 1:
			sp = new box;
			break;
		case 2:
			sp = new sphere;
			break;
		case 3:
			sp = new tetrahedron;
			break;

		default:
			return 0;
		}
		sp->InData(ifst);
		return sp;
	}
} // end simple_shapes namespace

