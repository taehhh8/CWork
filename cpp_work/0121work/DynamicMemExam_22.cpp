#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int i, totalLen;
    int arrLen = 3 ,addLen = 2;
    int *ptrArr;

    // ptrArr = (int*)malloc(arrLen *sizeof(int)); // dynamic alloaction memory
    ptrArr = (int*)calloc(arrLen, sizeof(int)); // dynamic alloaction memory calloc은 이렇게 사용한다.

    if(ptrArr == NULL) // dynamic allocation fail
    {
        cout << "Dynamic memory allocation fail...." << endl;
        exit(1);
    }

    cout << "Dynamic allocation memory intial value : \n";
    for(int i = 0; i < arrLen; i++)
    {
        cout << ptrArr[i] << endl;
    }

    totalLen = arrLen + addLen;
    ptrArr = (int*)realloc(ptrArr, (totalLen * sizeof(int)));

    if(ptrArr == NULL)  // dynamic reallocation fail
    {
        cout << "Dynamic memory reallocation fail...." << endl;
        exit(2);
    }    

    cout << "Dynamic reallocation memory intial value : \n";
    for(int i = 0; i < totalLen; i++)
    {
        cout << ptrArr[i] << endl;
    }    

    free(ptrArr);

    // const char *pStr = "This is character string pointer";
    // char *pStrDest = (char*)calloc(strlen(pStr) + 1, sizeof(char));

    // cout << "pStrDest Length : " << strlen(pStrDest) << endl;
    // strncpy(pStrDest, pStr, strlen(pStr) + 1);
    // // strncpys_s(pStrDest, strlen(pStr) + 1, pStr, strlen(pStr) + 1); //window
    // cout << "pStrDest Length : " << strlen(pStrDest) << endl;
    // cout << "pStrDest : " << pStrDest << endl;

    // free(pStrDest);

    // char cAlphabet, *pAlphabet, *ptr;
    // pAlphabet = (char*)calloc(35, sizeof(char));

    // if( pAlphabet == NULL)
    // {
    //     cout << "Dynamic memory allocation fail...." << endl;
    //     exit(1);
    // }

    // ptr = pAlphabet; //주소를 그대로 준것이다. 나중에 pAlphabet으로 출력할것이기 때문에

    // for(cAlphabet = 0x41; cAlphabet < 0x5B; cAlphabet++)
    // {
    //     *ptr++ = cAlphabet;
    // }
    // *ptr = '\0';

    // cout << "Alphabet String : " << pAlphabet << endl; //첫포인터를 그대로 쓰기위한 방법 문자열검색할때 자주사용

    // free(pAlphabet);



    return 0;
}