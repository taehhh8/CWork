#include <iostream>
#include <set> // set는 자동적으로 데이터 정렬하고 중복도 없애준다.

using namespace std;

template <typename T>
void PrintSetElement(set<T>& s)
{
    cout << "[";
    for (typename set<T>::iterator itr = s.begin(); itr != s.end(); ++itr) //포인터 연산자를 제정의해서 마치 참조연산자처럼 쓰게해준다.
    {
        cout << *itr << " ";
    }
    cout << "]\n";
}

int main()
{
    set<int> s;
    s.insert(10);
    s.insert(50);
    s.insert(20);
    s.insert(30);
    s.insert(40);

    cout << "Initial status set : sorted print" << endl;
    PrintSetElement(s);

    cout << "20 is s element ? ::";
    // auto nNumber = 10;
    // auto strHello = "World!!!!";
    // int n[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    // for (auto i : n)
    // {
    //     cout << i;
    // }

    // auto itr = s.find(20); //auto는 어떠한 변수가 되도된다.
    set<int>::iterator itr = s.find(20);
    if(itr != s.end())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    cout << "Hello World!\n";

    cout << "25 is s element ? :: ";
    itr = s.find(25);
    if(itr != s.end())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    
    set<int> nSet; // 유니크한 value들만 가능 중복된 숫자는 들어갈 수 없다.
    nSet.insert(10);
    nSet.insert(20);
    nSet.insert(10);
    nSet.insert(30);
    nSet.insert(20);
    nSet.insert(40);
    cout << "nSet : ";
    PrintSetElement(nSet);

    return 0;
}