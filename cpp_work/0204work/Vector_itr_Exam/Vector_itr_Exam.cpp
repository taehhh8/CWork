#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void PrintVector(vector<T>& vc)
{
    for(typename vector<T>::iterator itr = vc.begin(); itr != vc.end(); ++itr)
        cout << *itr << endl;
}

int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    
    cout << "first vector state" << endl;
    PrintVector(vec);
    cout << "=======================================" << endl;

    // insert before vec[2] vec2번째 앞에 추가
    vec.insert(vec.begin() + 2, 55);
    PrintVector(vec);

    cout << "=======================================" << endl;

    // erase vec[3] vec3번째 것 지우기
    vec.erase(vec.begin() + 3);
    PrintVector(vec);



    return 0;
}