#include <iostream>
#include "./VoidPtrExam_21.h" //c type의 include 형이다.

using namespace std;

// void increase(void *data, int pSize); // ;막아주는것을 functin propotype 라고한다 

int main()
{
    char a = 'x';
    int b = 1024;
    increase(&a, sizeof(a));
    increase(&b, sizeof(b));
    cout << "a : " << a << ", b  : " << b << endl;

    return 0;
}

void increase (void *pData, int nSize)
{
    if(nSize == sizeof(char))
    {
        char *pChar; //포인터형은 앞에 항상 p를 붙힌다.
        pChar = (char *)pData; //형변환해준다. type chasting
        ++(*pChar);
    }
    else if(nSize == sizeof(int))
    {
        int *pInt;
        pInt = (int*)pData; //형변환
        ++(*pInt);
    }
}