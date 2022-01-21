#include <iostream>

using namespace std;

// int i;
// int j;
int danNum = 1;

int main () 
{
    while (danNum < 10)
    {
        cout << "Gugudan Number : ";
        cin >> danNum;
        if(danNum == 0)break;
        // if(danNum <= 10) break;
        for(int i = 1; i < 10; i++) 
        {
            cout << danNum << " * " << i << " = " << i*danNum << endl;
        }
    }
    return 0;
}