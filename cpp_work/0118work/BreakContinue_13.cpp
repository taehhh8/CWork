#include <iostream>

using namespace std;

int main()
{
    for(int i = 0; i < 100; i++)
    {
        // if( i == 59) break; // 59에서 break;
        // if( i == 59) continue; // 59 없어도 계속 진행
        // if((i % 2) == 0) continue; // 홀수만 찍히게하기
        if((i % 2) == 1) continue; // 짝수만 찍히게 하기

        cout << i << ' ';
    }

    return 0;
}