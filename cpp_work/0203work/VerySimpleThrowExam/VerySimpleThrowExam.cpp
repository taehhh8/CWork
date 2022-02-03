#include <iostream>

using namespace std;

double division(int a, int b)
{
    if( b == 0)
    {
        throw "Division by Zero !!!";
    }

    return (double)(a / b );
}

int main()
{
    int x = 50;
    int y = 0;
    double z = 0.0f;
//1
    // try
    // {
    //     throw 128;
    // }
    // catch (int errCode)
    // {
    //     cout << "An exception occured. Exception Error code : " << errCode << endl;
    // }
//2
    try
    {
        z = division(x, y);
        cout << "divided value : " << z << endl;
    }
    catch (const char *errMsg)
    {
        cerr << errMsg << endl;
    }
//3 지정하지 않은 에러 보기
    // try
    // {
    //     z = division(x, y);
    // }
    // catch(const std::exception& e)
    // {
    //     cout << e.what() << endl;
    // }
    
    

    return 0;
}