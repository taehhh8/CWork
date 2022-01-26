#pragma once
#include <iostream>
#include <string>

using namespace std;

class CCar
{
    public:
        string m_strCompany;
        string m_strCarName;
        string m_strCarNo;

        void PrintCarInformation();
};

void CCar::PrintCarInformation()
{
    cout << "Car Company Name : " << m_strCompany << endl;
    cout << "Car Name : " << m_strCarName << endl;
    cout << "Car No : " << m_strCarNo << endl;
}