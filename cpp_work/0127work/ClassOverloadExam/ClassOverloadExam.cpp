// #include <iostream>
#include "Print.h"

using namespace std;

int main()
{
    CPrint printData;

    printData.print(4);
    printData.print(3.1425);
    printData.print((char*)"Hello World!!!");

    cout << "Hello C++" << endl;
    return 0;
}
