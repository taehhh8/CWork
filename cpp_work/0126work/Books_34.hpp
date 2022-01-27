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
   // constructor(객체 생성자) 제일먼저 실행되어지는 함수, 변수들의 초기화를 해줄 수 있다.
   CBooks() 
   {
      cout << "CBooks Object Constructor!!!\n";
      m_Title = "Learning javascript 21 days";
      m_Author = "Bla Bla Foo";
      m_Subject = "Javascript web programming";
      m_nBookId = 353243;
   };

   //struct BooksInfo m_BooksInfo;
   string m_Title;
   string m_Author;
   string m_Subject;
   int m_nBookId;

   void PrintBookInformation(); //작은 클래스들은 클래스 안에 저장할수있다. inside
   // {
   //    cout << "Book title : " << m_Title << endl;
   //    cout << "Book Author : " << m_Author << endl;
   //    cout << "Book Subject : " << m_Subject << endl;
   //    cout << "Book ID : " << m_nBookId << endl;
   // }
};

void CBooks::PrintBookInformation() //outside
{
   cout << "Book title : " << m_Title << endl;
   cout << "Book Author : " << m_Author << endl;
   cout << "Book Subject : " << m_Subject << endl;
   cout << "Book ID : " << m_nBookId << endl;
}