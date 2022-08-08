#pragma once
#include "Point.h"
class Line {
public:
	Line(int,int);
	~Line();
	int calcLen() const;
private:
	Point* start;
	Point* end;
};