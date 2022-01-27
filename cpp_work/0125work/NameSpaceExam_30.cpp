#include <iostream>
#include <string>

// using namespace std;

using std::cout; //기능별 구분을 하기 위해서 standard라이브러리
using std::endl;

namespace first_space
{
    void myFunc()
    {
        cout << "This function is in first_space" << endl;;
    }
    namespace second_space
    {
        void myFunc()
        {
        cout << "This function is in second_space\n";
        }
        
    }

    namespace third_space
    {
        void myFunc()
        {
        cout << "This function is in third_space\n";
        }
    }
}

// using namespace first_space::second_space; //    first_space::myFunc();




int main()
{
    std::string strHello = "Hello World!!!!";
    // first_space::myFunc();
    first_space::myFunc();
    first_space::second_space::myFunc(); // 중첩해서 사용하는이유 namespace안에서도 명확하게 구분되는 기준이 있을때
    first_space::third_space::myFunc();
    // first_space::myFunc();

    return 0;
}