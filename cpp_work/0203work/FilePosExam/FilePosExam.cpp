#include <iostream>
#include <fstream>
#include <cstring> // memset은 cstring에 있다.

using namespace std;

struct DATE
{
    int year;
    int month;
    int day;
};

int main()
{
    DATE arrDate[3] = {
        { 2021, 12, 25 },
        { 2022, 11, 11 },
        { 2022, 2, 3 }
    };
    DATE date;
    DATE wDate = { 1991, 12, 23 };

    ofstream outFile;
    outFile.open("test.txt", ios::out | ios::binary); //text인데 binary쓰는중 binary로 저장했기떄무
    outFile.write((char*)arrDate, sizeof(DATE) * 3);

    outFile.seekp(0);
    outFile.write((char*)&wDate, sizeof(DATE)); // 구조체를 파일에 읽고 쓰는 것이 가능하다.
    outFile.close();

    ifstream inputFile;
    memset(arrDate, 0, sizeof(DATE) * 3); //arrDate initiate to 0 초기화
    inputFile.open("test.txt", ios::in | ios::binary);
    inputFile.read((char*)&arrDate, sizeof(DATE) * 3);

    for(int i = 0; i < 3; i++)
    {
        cout << arrDate[i].year << "-" << arrDate[i].month << "-" << arrDate[i].day << endl;
    }

    cout << "Random file position reading file" << endl;
    inputFile.seekg(sizeof(DATE) * 1, ios::beg);  // moving file position 랜덤하게 읽어보는것 
    inputFile.read((char*)&date, sizeof(DATE));
    cout << date.year << "-" << date.month << "-" << date.day << endl;

    return 0;
}