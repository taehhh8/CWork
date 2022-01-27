#include "Book.h"

CBook::CBook()
{
    
}

CBook::CBook(const string& strTitle, int nTotalPage)
{
    m_strTitle = strTitle;
    m_nTotalPage = nTotalPage;
    m_nCurrentPage = 0;
    SetPercent();
}

CBook::CBook(const CBook& orgBook)
{
    m_strTitle = orgBook.m_strTitle;
    m_nTotalPage = orgBook.m_nTotalPage;
    m_nCurrentPage = orgBook.m_nCurrentPage;
    m_fPercent = orgBook.m_fPercent;
} //복사 생성자

void CBook::SetPercent()
{
    m_fPercent = (double)m_nCurrentPage / m_nTotalPage * 100; //형변환 type casting 퍼센트 내는 공식
}

const CBook& CBook::ThickerBook(const CBook& compBook)
{
    if(compBook.m_nTotalPage > this->m_nTotalPage)
    {
        return compBook;
    }
    else
    {
        return *this; //this가 가르키고 있는곳의 object 내용을 Return해주는 것이다. 나자신의 주소를 넘겨준다.
    }

}