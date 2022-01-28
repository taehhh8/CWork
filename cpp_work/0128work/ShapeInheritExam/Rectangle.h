#pragma once
#include "CShape.h"
class CRectangle :
    public CShape
{
    public:
        CRectangle(int, int);
        int GetArea();
        CRectangle operator*(int) const;
        friend CRectangle operator*(int mul, const CRectangle&); //Friend function 특별한 opertator가 아닌경우에는 왠만하면 안쓰는것이좋다.
};