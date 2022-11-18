#include "point.h"
#include <math.h>

point::point() {
	x = 0;
	y = 0;
}

point::point(double x, double y) {
	this->x = x;
	this->y = y;
}

double point::getX() {
	return x;
}

double point::getY() {
	return y;
}

void point::setX(double x) {
	this->x = x;
}

void point::setY(double y) {
	this->y = y;
}

double point::distance(point p) {
	return sqrt(pow(p.getX() - x, 2) + pow(p.getY() - y, 2));
}

point point::suma(point p) {
	return point(x + p.getX(), y + p.getY());
}

