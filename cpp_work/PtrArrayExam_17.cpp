#include <iostream>

using namespace std;

int main()
{
    int arrNumber[5];
    int* ptr; //int type pointer가 맞는개념 ptr이 가르키는 것은 첫번째 주소

    ptr = arrNumber; *ptr = 10; // arrNumber[0]넣는것과 똑같은 효과
    ptr++; *ptr = 20; //arrNumber[1]두번쨰방에 20을 넣어주고 20을 가르킨다
    ptr = &arrNumber[2]; *ptr = 30; // arrNumber[2]
    ptr = arrNumber + 3; *ptr = 40; // arrNumber[3]
    ptr = arrNumber; *(ptr + 4) = 50; // arrNumber[4]

    for(int i = 0; i < 5; i++)
    {
        cout << "[" << i << "] = " << arrNumber[i] << endl; 
    }

    return 0;
}