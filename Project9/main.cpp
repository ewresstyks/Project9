#include<iostream>
#include<time.h>
#include "Point.h"
using namespace std;

int main()
{
    srand(unsigned(time(0)));

    Point obj1;
    obj1.Output();

    Point obj2(10, 20, 30);
    obj2.Output();

    system("pause");

}