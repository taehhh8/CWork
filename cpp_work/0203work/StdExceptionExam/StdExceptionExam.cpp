#include <iostream>
#include <exception>

using namespace std;

void ExceptHandler()
{
    cout << "Exception !!!!" << endl;

    exit(-1);
}

struct MyException : public exception
{
    const char *what() const throw()
    {
        return "Defining new exception";
    }
};
class DefException : public exception
{
    virtual const char *what() const throw()
    {
        return "Defining new class exception";
    }
};

int main()
{
    // set_terminate(ExceptHandler);
    // try
    // {
    //     throw 1;
    // }
    // catch (char *const ex)
    // {
    //     // cannot process integar exception
    // }
    // try
    // {
    //     throw Exception();
    // }
    // catch (MyException& e)
    // {
    //     cout << "MyException Caugth" << endl;
    //     cout << e.what() << endl;
    // }
    // catch (const std::exception&)
    // {
    //     // other error
    // }
    try
    {
        // throw DefException();
        int *nArr = new int[1000];
        delete nArr;
    }
    catch (exception& e)
    {
        cout << "Standard Exception Caugth" << endl;
        cout << e.what() << endl;
    }

    cout << "Hello World!\n";
    
    
    return 0;
}