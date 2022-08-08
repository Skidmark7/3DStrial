#pragma once
#include <iostream>
#include "Shapes.h"
using namespace std;
class Point:public Shapes {
	friend ostream& operator<<(ostream&, const Point&);
public:
	Point(int = 0, int = 0, int=0);
	void setPoint(int, int);
//	int getX() const {return x;}
//	int getY() const {return y;}
	virtual void drawShape() const { cout << "Point : "; }
	virtual void print() const;
private:
	int x;
	int y;
	int refC;
};