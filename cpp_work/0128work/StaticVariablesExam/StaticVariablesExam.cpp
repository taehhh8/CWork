#include <iostream>
#include "Person.h"

int main()
{   //모든 오브젝트를 공유한다.
    CPerson *pLas = new CPerson("Lass Ulich", 59);
    CPerson *pJames = new CPerson("James Hettfield", 59);
    CPerson *pKirk = new CPerson("Kirt Hamett", 60);
    CPerson *pRobert = new CPerson("Robert Trujilo", 58);

    cout << "Currently Created People : " << CPerson::PersonCount() << endl;

    if(pLas != NULL) delete pLas;
    if(pJames != NULL) delete pJames;
    if(pKirk != NULL) delete pKirk;
    if(pRobert != NULL) delete pJames;

    
}