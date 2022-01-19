#include <iostream>
// #include <ostream>
#include <stdio.h>
#include <string>

#include "Variables_exam_05.hpp"

using namespace std;

// int main(int argc, char* argv[])
// {
//     const int nNumber = 10;  // c++ 은 자바스크립트와 다르게 변수가 항상 무엇을 의미하는지 표시해야한다.
//     // nNumber = 200;

//     cout << nNumber << endl;

//     const int iMinutesPerHour = 60;
//     const float PI = 3.141592;
//     cout << "iMinutesPerHour = "<< iMinutesPerHour << NEW_LINE;
//     cout << "PI = "<< PI << endl;
//     printf("iMinutesPerHour[%d], PI[%f]\n", iMinutesPerHour, PI);

//     cout << "Define const WIDTH = " << WIDTH << NEW_LINE;
//     cout << "Define const HEIGHT = " << HEIGHT<< NEW_LINE;

//     if(argc > 1)
//     {
//         cout << "argc = " << argc << endl; //endl   줄바꿈을 삽입해주는 매크로
//         for(int i = 0; i < argc; i++)
//         {
//             cout << "argv[" << i << "]" << "=" << argv[i] << endl;
//         }
//     }

//     return 0;
// }

int main () 
{
    int nNum = 6;
    float fNum = 6.12345678;
    double dNum = 8.1234567890123456;
    char cLetter = 'A';
    bool isVar = true, isFalse = false;
    string strText = "Hello\tWorld!!!\a"; // \b 출력할때 하나를 지움  ,\r 줄바꿈 ,\t tab으로 띄어짐, \v 위아래로 갈라짐, \a 피씨킬때소리
    int isNumber = true;

    cout << "int : " << nNum << endl;
    cout.precision(7);
    cout << "float : " << fixed << fNum << endl;
    cout.precision(15);
    cout << "double : " << fixed << dNum << endl;
    cout << "char : " << cLetter << endl;
    cout << "bool isVal : " << isVar << ", bool is False : " << isFalse << ", isNumber : " << isNumber << endl;
    cout << "string : " << strText << endl;
    printf("cLetter number : %d\r\n", cLetter);  //%x 16진수 
    cout << "=========================" << endl;

    float f1 = 24e3;
    double d1 = 15E4;
    cout << "f1 : " << f1 << ", d1 : " << d1 << endl; // 위의 cout.percision 의 영향을 받았다. 그래서 길게 나오는 것

    char chA = 'A';
    // char chAA = 65; //65는 A
    // char chBB = 66;
    // char chCC = 67;
    char chAA = 0x41;  //10진수로 썻을때
    char chBB = 0x42;
    char chCC = 0x43;

    cout << "chA : " << chA << endl;
    cout << chAA << chBB << chCC << endl;

    string strGreeting = "Hello C++!!!!";
    cout << strGreeting << endl;


    return 0;
}
