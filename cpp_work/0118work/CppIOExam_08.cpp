#include <iostream>

using namespace std;

int main ()
{
    // int x = 0; //x라는 변수 선언

    // cout << "Input a Number : "; //줄을 안바꾸고 cin받기
    // cin >> x; 
    // cout << "Your Input Number : " << x << endl;

    // int x,y;
    // int nSum;

    // cout << "Input x Number : ";
    // cin >> x; cout << endl;
    // cout << "Input y Number : ";
    // cin >> y; cout << endl;

    // nSum = x + y;
    // cout << "nSum = " << nSum << endl;

    char strName[50];
    int age = 0;

    cout << "Enter Your Name and age : ";
    cin >> strName >> age; cout << endl;
    cout << "Your name is " << strName << ", Your age is " << age << endl;

    char strErr[] = "Welcome to C++ Hell!!!";
    cerr << "Error Message : " << strErr << endl;

    char strLog[] = "We gonna die to Hell!!!";
    clog << "Log Message : " << strLog << endl; // Log 성으로 내보내고 싶을때

    return 0;
}