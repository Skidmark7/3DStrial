#pragma once
#include "Circle.h"
#include <iostream>
using namespace std;
class Cylinder :public Circle {
//	friend ostream& operator<<(ostream&, const Cylinder&);
public:
	Cylinder(double=0, double=0, int=0, int=0);
	void setHeight(double);
//	double getVolume(void) const;
	virtual double CalcArea() const;
	virtual double CalcVol() const;
	virtual void drawShape() const { cout << "Point : "; }
	virtual void print() const;

private:
	double height;
};