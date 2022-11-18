#include "../point/point.h"
#include "triangulo.h"
#include <math.h>
#include <vector>
#include <iostream>

using namespace std;

triangulo::triangulo() {
}

void triangulo::agregarVertice(point p) {
	vertices.push_back(p);
}

void triangulo::calcularPerimetro() {
	double perimetro = 0;
	for (int i = 0; i < vertices.size(); i++) {
		if (i == vertices.size() - 1) {
			perimetro += vertices[i].distance(vertices[0]);
		} else {
			perimetro += vertices[i].distance(vertices[i + 1]);
		}
	}
	cout << "Perimetro: " << perimetro << endl;
}
	
