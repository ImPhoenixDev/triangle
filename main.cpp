#include "point/point.h"
#include "triangulo/triangulo.h"
#include <iostream>

using namespace std;

int main()
{
	triangulo t;

	cout << "Valor en X del Punto 1" << endl;
	double x1;
	cin >> x1;
	cout << "Valor en Y del Punto 1" << endl;
	double y1;
	cin >> y1;
	point p1(x1, y1);
	t.agregarVertice(p1);
	
	cout << "Valor en X del Punto 2" << endl;
	double x2;
	cin >> x2;
	cout << "Valor en Y del Punto 2" << endl;
	double y2;
	cin >> y2;
	point p2(x2, y2);
	t.agregarVertice(p2);

	cout << "Valor en X del Punto 3" << endl;
	double x3;
	cin >> x3;
	cout << "Valor en Y del Punto 3" << endl;
	double y3;
	cin >> y3;
	point p3(x3, y3);
	t.agregarVertice(p3);
	t.calcularPerimetro();


	return 0;
}
