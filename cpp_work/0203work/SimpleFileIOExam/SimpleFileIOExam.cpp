#include <iostream>
#include <fstream>
#include <string>

using namespace std; //iostream들은 스탠다드에 있다.

int main()
{
    // ofstream file("simplefile.txt");

    // file << "Hello World\n";

    // file.close();

    string readString;
    ifstream readFile("simplefile.txt");

    while (getline(readFile, readString))
    {
        cout << readString << endl;
    }

    return 0;
}