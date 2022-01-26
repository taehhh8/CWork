#include <iostream>

using namespace std;

#pragma pack (push ,1)
struct ExamSize
{
    char a;
    int b;
    double c;
};
#pragma (pop)

struct ExamSize1
{
    char a;
    int b;
    double c;
};


int main(int argc, char *argv[]) //이중포인터
{
    cout << "Structure ExamSize's each Member variable size : " << endl;
    cout << "char : " << sizeof(char) << ", " << sizeof(int) << ", " << sizeof(double) << endl;

    cout << "Size of structure : " << sizeof(ExamSize) << endl;
    cout << "Size of structure : " << sizeof(ExamSize1) << endl;

    return 0;


}