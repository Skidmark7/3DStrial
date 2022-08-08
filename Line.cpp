#include "line.h"

Line::Line(int x, int y) {
	start = new Point(x, y);		// Point constructor is called
	end = new Point(x+5, y);
}
int Line::calcLen()const {
	return (start->getX-end->getX );
}
Line::~Line() {
	delete start;
	delete end;
}