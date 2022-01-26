#pragma once
#include <iostream>
#include <string>

using namespace std;

#pragma pack(push,1)
//struct BooksInfo{
//    string m_Title;
//    string m_Author;
//    string m_Subject;
//    int m_nBookId;
//};
#pragma pack(pop)

class CBooks
{
public:
   //struct BooksInfo m_BooksInfo;
   string m_Title;
   string m_Author;
   string m_Subject;
   int m_nBookId;

   void PrintBookInformation();
};

void CBooks::PrintBookInformation()
{
   cout << "Book title : " << m_Title << endl;
   cout << "Book Author : " << m_Author << endl;
   cout << "Book Subject : " << m_Subject << endl;
   cout << "Book ID : " << m_nBookId << endl;
}