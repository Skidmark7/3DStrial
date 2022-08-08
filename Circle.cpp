#include "Circle.h"
#include "Point.h"
extern const double PI = 3.14159;
Circle::Circle(double d, int a, int b):Point(a,b) {
	setRadius(d);
}

void Circle::setRadius(double a) { radius = (a > 0) ? a : 0; }

double Circle::getRadius()const { return radius; }

double Circle::CalcArea () const { return (PI * radius * radius); }
/*
ostream& operator << (ostream& out, const Circle& c) {
	out << "Center at " << static_cast<Point>(c) << endl;
	out << "Radius = " << c.radius << endl;
	out << "Area = " << c.CalcArea() << endl;
//	out << "Center at " << c.x << " , " << c.y << endl;
	return out;
}*/
void Circle::print() const {
	Point::print();
	cout << "Radius is "<<radius << endl;
}

void foo() {
	cout << "For git\n";
}
