#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "../point/point.h"
#include <vector>
using std::vector;

class triangulo {
	private:
		vector <point> vertices;
	public:
		triangulo();
		void agregarVertice(point p);
		void calcularPerimetro();
};

#endif
