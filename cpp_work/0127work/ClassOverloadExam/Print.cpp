#include "Print.h"
#include <iostream>

void CPrint::print(int i)
{
    cout << "Inteager number print : " << i << endl;
}

void CPrint::print(double f)
{
    cout << "Double number print : " << f << endl;
}

void CPrint::print(char* str)
{
    cout << "Char number print : " << str << endl;
}