#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // 미리 파일 크기 확인 후 한번에 읽어서 복사 
    ifstream in;
    in.open("workplace.jpeg", ios::in | ios::binary);

    // total file size 
    in.seekg(0, ios::end); //ios end포지션 까지 seekg 0번쨰부터 end까지 ios하면 파일 길이가 나온다.
    long fileLength = in.tellg();
    cout << "Read file size : " << fileLength << " Byte" << endl;
    
    // loading total file size in memory
    in.seekg(0, ios::beg);
    char *buf = new char [fileLength];
    in.read(buf, fileLength);
    in.close();

    // buffter to file
    ofstream out;
    out.open("workplace_copy.jpeg", ios:: out | ios::binary); //create
    out.write(buf, fileLength);
    out.close();

    return 0;
}