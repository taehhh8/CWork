// 2022.1/25  C++수업

#include <iostream>

using namespace std;

double Add(double, double); //prototype
double Sub(double, double); 
double Mul(double, double); 
double Div(double, double); 
double Calculator(double, double, double(*func)(double, double)); //Calcultar에 함수 포인터를 주게 되있다.

int main()
{
    double (*calc)(double, double) = nullptr;  // Define function pointer 똑같은 타입의 함수포인터를 만들어서
    double dNum1 = 3., dNum2 = 4., result = 0.; //.만찍으면 소수점 이하를 가지는 실수라는뜻
    char oper = '+';

    switch (oper)
    {
        case '+':
            calc = Add; // function pointer주는것
            break;
        case '-':
            calc = Sub; //pointer주는것
            break;
        case '*':
            calc = Mul; //pointer주는것
            break;
        case '/':
            calc = Div; //pointer주는것
            break;
        default:
            cout << "Only Suport(+, -, *, /)" << endl;
            break;
    }

    result = Calculator(dNum1, dNum2, calc); //함수포인터에 맞는 값을 넣어주니

    cout << "The result : " << result << endl;

    return 0;
}


double Add(double dNum1, double dNum2)
{
    
    return dNum1 + dNum2;
}

double Sub(double dNum1, double dNum2)
{
    
    return dNum1 - dNum2;
}

double Mul(double dNum1, double dNum2)
{
    
    return dNum1 * dNum2;
}

double Div(double dNum1, double dNum2)
{
    
    return dNum1 / dNum2;
}

double Calculator(double dNum1, double dNum2, double(*func)(double, double)) //값을 넘겨줄수 있도록 해놧다.
{
    return func(dNum1, dNum2);
}
