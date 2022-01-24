#include <iostream>
#include <time.h>
using namespace std;

#define NUM 9
int main()
{
    cout << "숫자야구" << endl;
    int Com[3], Player[3];
    int strike = 0, ball = 0;
    int count = 0;
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
    {
        Com[i] = rand() % NUM + 1;
    }
    for (int i = 0; i < 3; i++)
    {
        if (Com[i] == Com[i+1])
                Com[i+1] = rand() % NUM + 1;
        else if (Com[i] == Com[i + 2])
                Com[i+2] = rand() % NUM + 1;
        if (Com[i] == Com[i + 1] || Com[i] == Com[i + 2])
                i--;
    }
    cout << "컴퓨터 숫자 : " << Com[0] << ", " << Com[1] << ", " << Com[2] << endl;

    while (1)
    {
        strike = 0;
        ball = 0;
        cout << "숫자를 입력하세요. : ";
        cin >> Player[0] >> Player[1] >> Player[2];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (Com[i] == Player[j])
                {
                    if (i == j)
                            strike++;
                    else
                            ball++;
                }
            }
        }
        cout << ball << "B" << strike << "S" << endl;
        count++;
        if (strike == 3)
        {
            cout << "시도횟수" << count << endl;
            return 0;
        }
    }
}