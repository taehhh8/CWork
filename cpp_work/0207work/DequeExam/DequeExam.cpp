#include <iostream>
#include <deque>

using namespace std;

template <typename T>
void PrintDeque(deque<T>& dq)
{
    cout << "[";
    for(const auto& ele : dq)
    {
        cout << ele << " ";
    }
    cout << "]\n";
}

int main()
{
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);

    cout << "Inintial statue of deque" << endl;
    PrintDeque(dq);

    cout << "front element" << endl;
    dq.pop_front();
    PrintDeque(dq);

    std::cout << "Hello World/n";

    return 0;
}