#include <iostream>

int gVar = 100;

int main () 
{
    int a, b;
    int c;
    // int gVar; //프로그램은 지역 및 전역 변수에 대해 동일한 이름을 가질 수 잇지만 함수 내부의 지역 변수 값을 우선한다.

    a = 10;
    b = 40;
    c = a + b;
    // gVar = a + b; 

    std::cout << "c = a + b = " << c << std::endl;
    std::cout << "gVar = " << gVar << std::endl;

    return 0;
}