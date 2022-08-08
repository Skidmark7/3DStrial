#pragma once
#include "Point.h"
class Circle : public Point {
//	friend ostream& operator<<(ostream&, const Circle&);
public:
	Circle(double=0, int = 0, int = 0);
	void setRadius(double);
	double getRadius(void) const;
	virtual double CalcArea() const;
	virtual void drawShape() const { cout << "Point : "; }
	virtual void print() const;
private:
protected:
	double radius;
	double area;
};