#include <iostream>

using namespace std;

template <typename T>
class CData
{
    private:
        T m_data;
    
    public:
        CData(T dt);
        T get_data();
};

int main()
{
    CData<string> strData("Learning C++");
    CData<int> nData(12);

    std::cout << "strData : " << strData.get_data() << endl;
    std::cout << "nData : " << nData.get_data() << endl;
    return 0;
}

template <typename T>
CData<T>::CData(T dt)
{
    m_data = dt;
}

template <typename T>
T CData<T>::get_data()
{
    return m_data;
}