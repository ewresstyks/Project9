#pragma once
#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;
    int z;
public:
    Point();
    Point(int x1, int y1, int z1);
    void Init();
    void Init(int x1, int y1, int z1);
    void Output();
};
