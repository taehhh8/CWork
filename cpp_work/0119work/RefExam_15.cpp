#include <iostream>
#include <string>
//메모리의 주소를 참조한다. 그러나 변수의 메모리 주소를 얻는데도 사용할수있다. 메모리에 변수가 저장되는 위치
using namespace std;
void abc(int& x)
{
    x = 100; //이블럭에서 없어지는 것이 아닌 밑의 변수를 바꾸는 역할을 한다.
    cout << x << endl;
}

int main()
{ 
    // 주소 참조 연산자
    string food = "Pizza"; // &food(주소)에 pizza값을 할당
    string &meal = food; // &meal(주소)에 &food(주소)를 할당
    meal = "Hamburger "; // &meal(주소에) hamburger값을 할당
    // 변수는 다르지만 메모리는 공유하고 있다. 서로 같은 주소가 나온다.

    std::cout << food << "Address of food : " << &food << endl; //food의 메모리 주소를 그대로 주기 때문에 메모리 주소가 똑같다.
    std::cout << meal << "Address of meal : " << &meal << endl;

    int xx = 200; //메모리 참조를 해주기 때문에 메모리값을 바꾼다.
    abc(xx);
    cout << "xx : " << xx << endl;
}
