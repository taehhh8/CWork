// 2022.1/25  C++수업
#include <iostream>

using namespace std;

int main() 
{
    int n; //   i는 항상 for문으로 쓰는 버릇 들이기
    int *ptrNumber;

    cout << "How many numbers input ?"; cin >> n;
    ptrNumber = new int[n];
    // ptrNumber = new(nothrow) int[n]; // 메모리 할당이 실패할때 bad_alloc exception을 주거나 nullptr을 반환한다.
    if(ptrNumber == nullptr) //if NULL 이냐 nullptr이냐 새로 생김 
    {
        cout << "Error memory could not be allocated\n"; // << endl; 과 같다.
        exit(1);
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            cout << "Enter a number : "; cin >> ptrNumber[i];
        }

        cout << "You have entered : "; //기능별의 블럭들은 줄 띄어 쓰기를 잘해야한다.
        for(int i = 0; i < n; i++)
        {
            cout << ptrNumber[i] << ", ";
        }

        delete[] ptrNumber;
    }

    return 0;

}