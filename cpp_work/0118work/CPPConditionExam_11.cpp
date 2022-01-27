#include <iostream>
#include <time.h>

using namespace std;

int GetCurrentTime(void)
{
    time_t curTime = time(NULL);
    struct tm *pLocalTime = NULL;
    
    // localtime_s(pLocalTime, &curTime); //window os visuial stdio 용
    pLocalTime = localtime(&curTime);

    if(pLocalTime == NULL)
    {
        // time get faile then return 0
        return -1;
    }

    return pLocalTime->tm_hour; //포인터에 멤버를 접근할떄 ->를 쓴다.
}

int GetCurrentDay(void)
{
    time_t curTime = time(NULL);
    struct tm *pLocalTime = NULL;

    pLocalTime = localtime(&curTime);
    if(pLocalTime == NULL)
    {
        // time get faile then return 0
        return -1;
    }

    return pLocalTime->tm_wday; // mday 날짜
}

int main()
{
    int time = -1;
    int wDay = -1;    
    time = GetCurrentTime();
    wDay = GetCurrentDay();

    if(time < 0)
        return 128;

    if(time < 10)
    {
        cout << "Goo Morning KDigital class 4";
    }
    else if (time < 20)
    {
        cout << "Good day KDigital class 4";
    }
    else
    {
        cout << "Good evening KDigital class 4";
    }

    std::cout << "\r\n";

    if (wDay < 0)
        return 129;

    switch (wDay)
    {
        case 1:
            cout << "Monday";  
        break;
        case 2:
            cout << "Tuseday";
        break;
        case 3:
            cout << "Wednesday";
        break;
        case 4:
            cout << "Thursday";
        break;
        case 5:
            cout << "Friday";
        break;
        case 6:
            cout << "Saturday";
        break;
        case 7:
            cout << "Sunday";
        break;
    
        default:
            cout << "Noneday";
            break;
    }

    return 0;
}