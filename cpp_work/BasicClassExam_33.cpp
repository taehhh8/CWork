#include <iostream>
#include <string>
#include "Books_34.hpp"
#include "Car_35.hpp"

// using namespace std;
// #pragma pack(push,1)
// // struct BooksInfo{
// //     string m_Title;
// //     string m_Author;
// //     string m_Subject;
// //     int m_nBookId;
// // };

// #pragma pack(pop)
// class Books
// {
//     public:
//         // struct BooksInfo m_BooksInfo;
//         string m_Title;
//         string m_Author;
//         string m_Subject;
//         int m_nBookId;
//         //구조체가 안으로 들어올수 있다.

//         void PrintBookInformation()
        
// };

// void CBooks::PrintBookInformation()
// {
//     cout << "Book title : " << m_Title << endl;
//     cout << "Book Author : " << m_Author << endl;
//     cout << "Book Subject : " << m_Subject << endl;
//     cout << "Book ID : " << m_nBookId;
// }

int main()
{
    CBooks booksObj;
    booksObj.m_Title = "Learning C++ 21 days";
    booksObj.m_Author = "SiEun Lee";
    booksObj.m_Subject = "Learning C++ Progarmming";
    booksObj.m_nBookId = 19980225;

    booksObj.PrintBookInformation();

    CBooks cppBook;
    cppBook.m_Title = "Learning C++ in Hell";
    cppBook.m_Author = "Hades";
    cppBook.m_Subject = "Learning C++ Progarmming in Olympus";
    cppBook.m_nBookId = 20210225;
    cppBook.PrintBookInformation();

    CCar carObj;
    carObj.m_strCompany = "BMW";
    carObj.m_strCarName = "BMW X5";
    carObj.m_strCarNo = " NY 3456";
    carObj.PrintCarInformation();

}