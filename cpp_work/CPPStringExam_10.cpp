#include <iostream>
#include <string> //iostream에 없는 이유 나중에 생겨서 없다.

using namespace std;

int main ()
{
    string firstName = "James ";
    string lastName = "Hetfield";
    string equip = ", ESP Explorer Guitar";
    // char cA = "A"; //string이라 "" ,'' 사용 가능

    // string fullNameEquip = firstName + ", " + lastName + ", " + equip;
    // string fullNameEquip = firstName + ' ' + lastName + ", " + equip;
    string fullNameEquip = firstName.append(lastName.append(equip.append(", Taehyun"))); //string 에서만 append() 함수 사용 가능 

    std:cout << fullNameEquip << endl;
    
    string strAlphbet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    cout << "strAlphabet length : " << strAlphbet.length() << endl;
    cout << "strAlphabet   size : " << strAlphbet.size() << endl;
    
    string strHello = "Hello World!!!";
    cout << strHello[0] << endl;
    strHello[0] = 'J';
    
    for(int i = 0; i < strHello.length(); i++)
    {
        cout << strHello[i]; 
    }
    // for(int i = 0; i < strHello.length(); i++)
    //     cout << strHello[i];  // 블록을 들여쓰기를 안해도 알아서 인식된다.
    cout << endl;

    string baseballTeam;

    cout << "Enter your favorite baseball Team : ";
    getline(cin, baseballTeam);
    
    cout << baseballTeam << endl;

    return 0;
}