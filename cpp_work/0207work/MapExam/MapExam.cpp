#include <iostream>
#include <map>
#include <string>

using namespace std;

template <typename K, typename V>
void PrintMapElement(map<K, V>& m)
{
    for(auto itr = m.begin(); itr != m.end(); ++itr)
    {
        cout << itr->first << ", " << itr->second << endl;
    }
}

template <typename K, typename V>
void SearchPrintElement(map<K, V>& m, K key) // key값이 무엇인지 모르기떄문에 string을 캐스팅해줘야한다.52번째줄
{
    auto itr = m.find(key);
    if(itr != m.end())
    {
        cout << key << " => " << itr->second << endl;
    }
    else
    {
        cout << key << " is not found in map " << endl;
    }
}

int main()
{
    map<string, double> pitcherList;

    pitcherList.insert(std::pair<string, double>("Kershaw", 0.12));
    pitcherList.insert(std::pair<string, double>("DDung", 7.89));
    pitcherList.insert(std::pair<string, double>("Otani", 7.89));

    pitcherList.insert(std::make_pair("Chanho", 2.12));
    pitcherList.insert(std::make_pair("SunWoo", 3.14));
    pitcherList.insert(std::make_pair("KwangHyun", 3.55));

    pitcherList["DongRyul"] = 3.45;
    pitcherList["DongWon"] = 1.67;
    pitcherList["ChooChoo"] = 2.51;

    PrintMapElement(pitcherList);

    cout << "Chanho's ERA : " << pitcherList["Chanho"] << endl;
    pitcherList["ChooChoo"] = 8.51;
    cout << "ChooChoo's ERA : " << pitcherList["ChooChoo"] << endl;

    SearchPrintElement(pitcherList, string("Otani"));
    SearchPrintElement(pitcherList, string("Chaboom"));

    return 0;
}