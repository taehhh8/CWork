#include <iostream>
#include <string>

using namespace std;

int main()
{
    string food = "Hamburger";
    string *ptrFood = &food;
    
    cout << "food : " << food << endl << "Address of food : " << &food << endl;
    cout << "ptrFood : " << *ptrFood << endl<< "Address of ptrFood : " << ptrFood << endl;

    *ptrFood = "Pizza";
    // *(ptrFood + 1) = "Pizza"; //스트링 크기만큼 +1을 해줘서 할당이 안된경우

    cout << "food : " << food << endl << "Address of food : " << &food << endl;
    cout << "ptrFood : " << *ptrFood << endl<< "Address of ptrFood : " << ptrFood << endl;
    
    // int nNumber = 1234;
    // int *ptrNumber = &nNumber; //ptrNumber 가르키는 주소값에 들어가면 값을 가지고 잇는데 nNumber주소값을 참조해서 초기화 해주었다.

    // cout << "nNumber : " << nNumber << endl << "Address of nNumber : " << &nNumber << endl;

    // cout << "ptrNumber : " << *ptrNumber << endl << "Address of ptrNumber : " << ptrNumber << endl; 
    return 0;
}