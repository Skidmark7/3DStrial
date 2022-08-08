#include "cylinder.h"
extern const double PI;
Cylinder::Cylinder(double hg, double rd, int a, int b): Circle(rd, a, b) {
	setHeight(hg);
}
void Cylinder::setHeight(double hg) { height = hg; }

double Cylinder::CalcArea()const {
	return (2 * PI * Circle::getRadius() * (Circle::getRadius() + height));
}
double Cylinder::CalcVol()const {
	return (Circle::CalcArea() * height);
}
/*ostream& operator << (ostream& out, const Cylinder& cy) {
	out << static_cast<Circle>(cy) << "Height = " << cy.height<<endl;
	out << "Cylinder Area = " << cy.CalcArea() << endl;
	out << "Cylinder volume = " << cy.CalcVol() << endl;
//	out << "Center at " << c.x << " , " << c.y << endl;
	return out;
}*/
void Cylinder::print() const {
	Circle::print();
	cout << "Height is " << height << endl;
}

