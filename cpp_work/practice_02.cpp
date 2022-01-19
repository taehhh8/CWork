#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[])  // 실행하는 argc를 받을 배열 포인터 = char*[]
{    
    int num = 15;
    cout << num << "\n"; //cout 출력

    if(argc > 1)
    {
        cout << "argc = " << argc << endl; //endl   줄바꿈을 삽입해주는 매크로
        for(int i = 0; i < argc; i++)
        {
            cout << "argv[" << i << "]" << "=" << argv[i] << endl;
        }
    }

    double fNum = 99.999;
    char cLetter = 'A';
    string strText = "Hello C++ !!!";

    cout << "fNum = " << fNum << ", cLetter = " << cLetter << ", strText = " << strText << endl;
    printf("floatNum[%f], charLetter[%c]\n", fNum, cLetter);
    
    int x = 15, y = 21, z = 60; 

    cout << "x = " << x << "y = " << y << "z = " << z << endl;
    cout << "sum = " << x + y + z << endl;

    return 0;
}