// 2022.1/25  C++수업

#include <iostream>

using namespace std;

int add(int x, int y)
{
    return x + y;
}

float add(float x, float y)
{
    return x + y;
}

int main()
{   
    cout << "Adding Integer number : " << add(13, 67) << endl;
    cout << "Adding Float number : " << add(13.43f, 67.56f) << endl; // 13.43뒤에 f는 float이라는 것을 명시해주는 것이다.
    return 0;
}
