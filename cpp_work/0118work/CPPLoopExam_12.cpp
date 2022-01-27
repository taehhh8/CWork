#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i = 0;

    // while (i < 10)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    // do {
    //     cout << i << endl;
    //     i++;
    // } while (i < 10 );

    // for(int i = 0; i < 10; i ++)
    // for(int i = 0; i < 10; i = i + 2) // 짝수가 찍고 싶을 때 (i +=2)  === (i = i+2) 와 같다
    // {
    //     cout << "for loop i = " << i << endl;
    // }

    // for(int n = 0, i = 100; n != i; ++n, --i)
    // {
    //     cout << "n= " << n << ", i= " << i << endl;
    // }

    int nArr[5] = {1, 3, 5, 7, 9};

    for (int i : nArr)
    {
        cout << "Range-Based for loop i = " << i << endl;
    }

    string str ("Hello World");
    // char str[] = "Hello_World!!!"; // 마지막에는 /n null값이 들어가있다.
    for (char c : str)
    {
        cout << "Range-Based for loop c = " << c << endl;
    }

    return 0;
    
}