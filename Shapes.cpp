#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"
#include "Shapes.h"
int main() {

    /*Point *ptr = 0, p(30, 50);
	cout << p;
	Circle *cr = 0, c(15.0, 20, 30);
	cout << c;
	ptr = &c;
	cout << "\nCircle via point ptr \n" << *ptr << endl;

	cr = static_cast<Circle*>(ptr);
	cout << "\nCircle via circle pointer " << *cr << "\nArea is " << cr->CalcArea() << endl;

	ptr = &p;

	cr = static_cast<Circle*>(ptr);
	cout << "\nPoint via circle pointer " << *cr << "\nArea of object circle pointer points to: " << cr->CalcArea() << endl;
	return 0;

	cr = &p;
	*/
	
	Point p(30, 50);
	p.drawShape();
	p.print();
	cout << p.CalcArea() << " is the Area" << endl;
	cout << p.CalcVol() << " is the Volume\n" << endl;

	Circle c1(3,4,5);
	c1.drawShape();
	c1.print();
	cout << c1.CalcArea() << " is the Area" << endl;
	cout << c1.CalcVol() << " is the Volume\n" << endl;

	Cylinder c2(3, 4, 5, 6);
	c2.drawShape();
	c2.print();
	cout << c2.CalcArea() << " is the Area" << endl;
	cout << c2.CalcVol() << " is the Volume\n" << endl;
	
	Shapes* sp1[3] = { &p,&c1,&c2 };
	for (int i = 0; i < 3; i++) {
		virtualViaPointer(sp1[i]);
	}

	Shapes* sp2[3] = { &p,&c1,&c2 };
	for (int i = 0; i < 3; i++) {
		virtualViaPointer(*sp2[i]);
	}

	return 0;
}