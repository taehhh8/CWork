// 전처리기에서 읽고 시작하는 지시문. 컴파일이 시작되기 전에 해석되는 특수라인으로 이경우 헤더 iostream으로 알려진 표준 C++코드를 포함하도록 지시한다.
#include <iostream>

// using namespace std; //std라는 mainspace를 사용할꺼라고 선언해주는것

int main()
{
    // cout << "Helllo World!!!" << endl;
    std::cout << "Helllo World!!!" << std::endl;

    return 0;
}