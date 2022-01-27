#pragma once
#include <iostream>
#include <string>

using namespace std;

class CCar
{
    public:
        // attribute(속성)
        string m_strCompany;
        string m_strCarName;
        string m_strCarNo;

        //Method(함수)
        void PrintCarInformation();
        int CarSpeed(int maxSpeed);
};

void CCar::PrintCarInformation()
{
    cout << "Car Company Name : " << m_strCompany << endl;
    cout << "Car Name : " << m_strCarName << endl;
    cout << "Car No : " << m_strCarNo << endl;
}

int CCar::CarSpeed(int maxSpeed)
{
    return maxSpeed;
}