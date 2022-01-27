#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int grade[3] = { 85, 65, 90 };
    int &refGrade = grade[0];

    std::cout << grade << endl;
    for (int i = 0; i < 3; i++)
    {
        // cout << &grade[i] << endl;
        // cout << &grade[i] << endl;
        cout << refGrade + i << endl; //주소 값에 0byte를 더했더니 첫번째 주소값 포인터의 연산은 데이터 타입에 따른 크기만큼 + 된다.
    }

    string itCompany[5] = {"Apple", "Microsoft", "IBM", "Amazon", "ESP Guitar" };
    // string itCompany[] = {"Apple", "Microsoft", "IBM", "Amazon", "ESP Guitar" }; // 지정을 안해줘도 자율 지정된다.
    // string itCompany[5];
    // itCompany[0] = "Apple";
    // itCompany[1] = "Microsoft";
    // itCompany[2] = "IBM";
    // itCompany[3] = "Amazon";
    // itCompany[4] = "Esp Guitar";
    cout << itCompany[4];
    cout << endl;
    itCompany[0] = "Snakebyte Guitar";
    for(string str : itCompany)
        cout << str << endl;
        
    // int nNumber[] = { 12, 34, 54, 56 };
    // for (int i = 0; i < (sizeof(nNumber) / sizeof(nNumber[0])); i++)
    //     cout << "sizeof nNumber[" << i << "]:" << nNumber[i] << endl;    
    for(int i = 0; i < (sizeof(itCompany) / sizeof(itCompany[0])); i++)
        cout << "sizeof itCompany[" << i << "] : " << itCompany[i] << endl;
    return 0;

}