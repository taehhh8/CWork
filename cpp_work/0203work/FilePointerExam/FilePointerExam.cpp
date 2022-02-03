#include <iostream>
#include <fstream>

using namespace std;

const char* fileName = "workplace.jpeg";

int main()
{
    long lFirst, lEnd;

    ifstream iFile;
    iFile.open(fileName, ios::in | ios::binary);
    lFirst = iFile.tellg(); //오픈만 했으니 포지션이 제일 앞이다. 현재파일 위치를 정수 값으로 가져오기때문에
    iFile.seekg(0, ios::end);
    lEnd = iFile.tellg(); // 현재 파일 포지션을 가져온다.
    iFile.close();

    cout << "file [ " << fileName << "] size :  " << (lEnd - lFirst) << endl;


    return 0;
}