#pragma once
#include <iostream>

using namespace std;

class CBook
{
    private:
        int m_nCurrentPage;
        void SetPercent();

    public:
        CBook();
        CBook(const CBook&);
        CBook(const string& title, int nTotalPage);
        string m_strTitle;
        int m_nTotalPage;
        double m_fPercent;
        void Move(int nPage);
        void Open();
        void Read();

        const CBook& ThickerBook(const CBook&);
};