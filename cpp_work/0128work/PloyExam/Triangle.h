#pragma once
#include "Shape.h"
class CTriangle :
    public CShape
{
    public:
        CTriangle(int nWidth= 0, int nHeight = 0):CShape(nWidth, nHeight) {};
        int Area();
};