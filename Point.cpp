#include "Point.h"

Point::Point(int a, int b, int c) { setPoint(a, b); }

void Point :: setPoint(int a, int b) { x = a; y = b; }

ostream& operator << (ostream& out, const Point& p) {
	out << "[" << p.x << "," << p.y << "]" <<endl;
	return out;
}
void Point::print() const {
	cout << "[ " << x << " , " << y << " ]" << endl;
}