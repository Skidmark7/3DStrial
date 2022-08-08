#pragma once
#include<iostream>
using namespace std;
class Shapes {
public:
	virtual double CalcArea() const { return 0.0; }
	virtual double CalcVol() const { return 0.0; }		//not pure virtual
	virtual void drawShape() const = 0;
	virtual void print() const = 0;

};
void virtualViaPointer(const Shapes*);
void virtualViaPointer(const Shapes&);