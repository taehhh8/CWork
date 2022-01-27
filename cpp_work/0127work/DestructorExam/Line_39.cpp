#include "Line_40.h"

CLine::CLine()
{
    cout << "CLine Object is being created" << endl;
    m_pStrLineName = new char [16]; // m_pStr 내가 무슨 변수를 쓰는지 알려주는 법 헝그리형 표기법
}

CLine::~CLine()
{
    cout << "CLine Object is being delete" << endl;
    if (m_pStrLineName != NULL) 
    {
        delete m_pStrLineName;
    }
}

void CLine::SetLength(double len)
{
    m_dLength = len;
}

double CLine::GetLength()
{
    return m_dLength;
}

void SetLine(double lineLen, int nLen)
{
    double line = lineLen;
    int len = nLen;
}