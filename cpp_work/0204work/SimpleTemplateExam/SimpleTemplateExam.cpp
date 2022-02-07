#include <iostream>

using namespace std;

template <typename T> // typename key word in 98 version
void Swap(T& a, T& b);

template <> 
void Swap<double>(double&, double&);

template <typename T>
T const& Max(T const& a, T const& b);

template <typename T>
T const& Max(T const& a, T const& b);

int main()
{
    int c = 12, d = 15;

    std::cout << "c : " << c << ", d : " << d << endl;
    Swap(c, d);
    std::cout << "aftter swap = >" << "c : " << c << ", d : " << d << endl;

    double x = 12.45, y = 72.12;
    std::cout << "x : " << (double)x << ", y : " << (double)y << endl;
    Swap(x, y);
    std::cout << "aftter swap = >" << "x : " << (double)x << ", y : " << (double)y << endl;

    string strA = "Hello", strB = "World";
    std::cout << "strA : " << strA << ", strB : " << strB << endl;
    Swap(strA, strB);
    std::cout << "aftter swap = >" << "strA : " << strA << ", strB : " << strB << endl;

    std::cout << "int Max value : " << Max(c, d) << endl;
    std::cout << "double Max value : " << Max(x, y) << endl;
    std::cout << "string Max value : " << Max(strA, strB) << endl;


    return 0;
}

template <typename T> // typename key word in 98 version
void Swap(T& a, T& b) //모든 타입이 정용되기 때문에 여러가지를 할 수 있다.
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <> 
void Swap<double>(double& a, double& b)
{
    //Do not swapping double number
    // double temp = a;
    // temp = a;
    // a = b;
    // b = temp;
}

template <typename T>
T const& Max(T const& a, T const& b)
{
    return a < b ? b : a;
}


