// CautionItrExam.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void PrintVector(std::vector<T> &vc)
{
    // Print All vector elements
    cout << "[";
    for (typename std::vector<T>::iterator itr = vc.begin(); itr != vc.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << "]" << endl;
}

int main()
{
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(20);

    std::cout << "first status vector" << endl;
    PrintVector(vec);

    std::vector<int>::iterator itr = vec.begin();
    std::vector<int>::iterator endItr = vec.end();

    for (std::vector<int>::size_type i = 0; i != vec.size(); ++i)
    {
        if (vec[i] == 20)
        {
            vec.erase(vec.begin() + i);
            i--;
        }
    }

    cout << "value 2 delete" << endl;
    PrintVector(vec);

    return 0;
}