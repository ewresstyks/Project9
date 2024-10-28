#include "Point.h"
#include <iostream>
using namespace std;

Point::Point()
{
	cout << "Construct\n";
	x = y = z = 0;
}

Point::Point(int x1, int y1, int z1)
{
	cout << "Construct by 3 param\n";
	x = x1;
	y = y1;
	z = z1;
}

void Point::Init()
{
	x = rand() % 10;
	y = rand() % 10;
	z = rand() % 10;
}

void Point::Init(int x1, int y1, int z1)
{
	x = x1;
	y = y1;
	z = z1;
}

void Point::Output()
{
	cout << "X: " << x << endl << "Y: " << y << endl << "Z: " << z << endl;
}