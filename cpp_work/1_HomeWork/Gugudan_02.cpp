#include <iostream>

using namespace std;

int main () 
{
        cout << "가로출력 구구단" << endl;
        for(int i = 2; i < 10; i++) 
        {
            for(int j = 1; j <10; j ++){
                cout << i << " * " << j << " = " << i*j << "\t";
            }
            cout << endl;
        }
        
        cout << "세로출력 구구단" << endl;
        for(int i = 2; i < 10; i++) 
        {
            for(int j = 1; j <10; j ++){
                cout << i << " * " << j << " = " << i*j << endl;
            }
            cout << endl;
        }
    return 0;
}