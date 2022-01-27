#include <iostream>

using namespace std;

int main()
{   
    // int *ptrInt = new int; //new는 동적할당 연산자
    // *ptrInt = 1024; //* 방에다가 1024준다.

    // double *ptrDouble = new double;
    // *ptrDouble = 3.141592; // *는 ptrDouble 방에다 값을 주는것이다 *를 빼면 에러가 난다.

    // cout << "int type ptr value : : " << *ptrInt << endl;
    // cout << "double type ptr value : : " << *ptrDouble << endl;

    // if(ptrInt != NULL)
    // {
    //      delete ptrInt;
    //      ptrInt = NULL;
    // }

    // if (ptrDouble != NULL)
    // {
    //     delete ptrDouble;
    //     ptrDouble = NULL;
    // }

    char *pChar = new char;
    *pChar = 'a';
    cout << "Memory address : " << (void*)pChar << "\t value : : " << *pChar << endl;
    cout << "pChar Heap size : " << sizeof(*pChar) << endl;
    if (pChar == NULL)
    {
        delete pChar;
        pChar = NULL;
    }
    

    int *ptrNum = new int;
    *ptrNum = 24;
    cout << "Memory address : " << (void*)ptrNum << "\t value : : " << *ptrNum << endl;
    cout << "ptrNum Heap size : " << sizeof(*ptrNum) << endl;
    if (ptrNum == NULL)
    {
        delete ptrNum;
        ptrNum = NULL;
    }


    float *ptrFNum = new float;
    *ptrFNum = 3.14;
    cout << "Memory address : " << (void*)ptrFNum << "\t value : : " << *ptrFNum << endl;
    cout << "ptrFNum Heap size : " << sizeof(*ptrFNum) << endl;
    if (ptrFNum == NULL)
    {
        delete ptrFNum;
        ptrFNum = NULL;
    }
    
    double *ptrDNum = new double;
    *ptrDNum = 3.141592;
    cout << "Memory address : " << (void*)ptrDNum << "\t value : : " << *ptrDNum << endl;
    cout << "ptrDNum Heap size : " << sizeof(*ptrDNum) << endl;
    if (ptrDNum == NULL)
    {
        delete ptrDNum;
        ptrDNum = NULL;
    }

    return 0;
}