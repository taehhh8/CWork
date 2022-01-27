#pragma once

#include <iostream>

using namespace std;

class CLine
{
    public:
        CLine();
        ~CLine();

        void SetLength(double len);
        double GetLength();

    private:
        double m_dLength;
        char *m_pStrLineName;
};

void SetLine(double, int);