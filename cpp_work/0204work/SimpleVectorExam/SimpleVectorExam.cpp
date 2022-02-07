#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    // for(vector<int>::size_type i = 0; i < vec.size(); i++)
    // {
    //     cout << "vec" <<  i << " : " << vec[i] << endl;
    // }
    // 반복자가 end 가 아닐떄꺼지 ++ 해준다.
    for(vector<int>::iterator itr = vec.begin(); itr != vec.end(); ++itr) // 먼저 ++해주는것도 vector하는 사람의 공통적인 버릇
    {
        cout << "vector itr : " << *itr << endl;
    }

    vector<int>::iterator itr = vec.begin() + 2;
    cout << "third element : " << *itr << endl;

    std::cout << "Hello World\n";
    return 0;
}