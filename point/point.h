#ifndef POINT_H
#define POINT_H

class point {
	private:
		double x;
		double y;
	public:
		point();
		point(double x, double y);
		double getX();
		double getY();
		void setX(double x);
		void setY(double y);
		double distance(point p);
		point suma(point p);
};

#endif
