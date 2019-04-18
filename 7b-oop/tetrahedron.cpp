#include "tetrahedron.h"

using namespace std;

namespace simple_shapes 
{
	// Ввод параметров тетраэдра
	void tetrahedron::InData(ifstream &ifst) {
		ifst >> a;
	}
} // end simple_shapes namespace

using namespace std;

namespace simple_shapes 
{
	// Вывод параметров тетраидра
	void tetrahedron::Out(ofstream &ofst) {
		ofst << "It is Tetrahedron: r = "
			<< a << endl;
	}
} // end simple_shapes namespace
