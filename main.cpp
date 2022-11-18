/* #include "triangle/triangle.h" */
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
using std::vector;

int main()
{

	// Point
	// pont has x and y double values
	// has:
	// Point()
	// Point(double x, double y)
	// getX(): double
	// getY(): double
	// setX(double x): void
	// setY(double y): void
	// distance(Point p): double
	// suma(Point p): Point
	
	class Point {
		private:
			double x;
			double y;
		public:
			Point() {
				x = 0;
				y = 0;
			}
			Point(double x, double y) {
				this->x = x;
				this->y = y;
			}
			double getX() {
				return x;
			}
			double getY() {
				return y;
			}
			void setX(double x) {
				this->x = x;
			}
			void setY(double y) {
				this->y = y;
			}
			double distance(Point p) {
				return sqrt(pow(p.getX() - x, 2) + pow(p.getY() - y, 2));
			}
			Point suma(Point p) {
				return Point(x + p.getX(), y + p.getY());
			}
	};

	// Triangle 
	// has: 
	// vector <Point> vertices
	// agregarVertice(Point p): void
	// calcularPerimetro(): double
	

	class Triangle {
		private:
			vector <Point> vertices;

		public:
			void agregarVertice(Point p) {
				vertices.push_back(p);
			}
			void calcularPerimetro() {
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
	};

	// ask for value of x and y in the 3 points
	// create a triangle with the 3 points
	// print the perimeter of the triangle
	//
	
	Triangle t;

	cout << "Enter the value of X in the point 1" << endl;
	double x1;
	cin >> x1;
	cout << "Enter the value of Y in the point 1" << endl;
	double y1;
	cin >> y1;
	Point p1(x1, y1);
	t.agregarVertice(p1);
	
	cout << "Enter the value of X in the point 2" << endl;
	double x2;
	cin >> x2;
	cout << "Enter the value of Y in the point 2" << endl;
	double y2;
	cin >> y2;
	Point p2(x2, y2);
	t.agregarVertice(p2);

	cout << "Enter the value of X in the point 3" << endl;
	double x3;
	cin >> x3;
	cout << "Enter the value of Y in the point 3" << endl;
	double y3;
	cin >> y3;
	Point p3(x3, y3);
	t.agregarVertice(p3);
	t.calcularPerimetro();


	return 0;
}
