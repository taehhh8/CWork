// 2022.1/25  C++수업
#include <iostream>

using namespace std;

void HelloFunc() // void HelloFunc 이함수의 프로토타입 함수의 원형이라고 불린다. function prototype
{
    //code block
    cout << "Welcome to C++ hell!!!!" << endl;
}

void HelloWorld(string strName) //call by value
{
    cout << "Hello " << strName << endl;
}

// void WhereAreYouFrom(string strCountry = "KOREA")
void WhereAreYouFrom(string strName, int nAge, string strCountry = "KOREA")
{
    // cout << "I came from " << strCountry << "!!!!!" << endl;
    cout << "My name is " << strName << "and My Age is " << nAge << endl; 
    cout << "I came f " << strCountry << "!!!!!" << endl; 
}

int HowOldAreYou(int nAge)
{
    int age = nAge;
    return nAge;
}

void SwapInt(int& x, int& y) //포인터면 call by point
{
    int temp = x;//temp =임시
    
    x = y;
    y = temp;
}

int main()
{   
    HelloFunc();
    HelloWorld("SiEun!!!");
    HelloWorld("HyeJin!!!");
    HelloWorld("TaeHyun!!!");


    WhereAreYouFrom("SiEun", 20);
    WhereAreYouFrom("Hyejin", 20);
    WhereAreYouFrom("Hyein",  20);
    WhereAreYouFrom("James Hetfield" , 30, "USA"); //  이런경우에 쓰는것이 default parameter 입니다.

    cout << "My age : " << HowOldAreYou(25) << endl;
    cout << "=======================================================\n";
    int nFirst = 10, nSecond = 30;
    cout << "Before swam nFirst[" << nFirst << "], nSecond[" << nSecond << "]\n";
    SwapInt(nFirst, nSecond);
    cout << "Before swam nFirst[" << nFirst << "], nSecond[" << nSecond << "]\n";


    // WhereAreYouFrom("USA");
    // WhereAreYouFrom("Canada");
    // WhereAreYouFrom("France");
    // WhereAreYouFrom(); //default parameter
    
    return 0;
}