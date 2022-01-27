#pragma once

#ifndef __PRINT_H__
#define __PRINT_H__
#include <iostream>

using namespace std;

class CPrint
{
    public:

    CPrint() {};
    void print(int i);
    void print(double f);
    void print(char* str);
};

#endif