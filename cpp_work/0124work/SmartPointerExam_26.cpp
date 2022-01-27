// 2022.1/25  C++수업
#include <iostream>
#include <memory>

using namespace std;

class CPerson 
{
    private:
        string strName;
        int nAge;
    public:
        CPerson(const string& name, int age);
        ~CPerson() {cout << "Object Destructor" << endl; }
        void ShowPersonInfo();
};

int main()
{
    // unique_ptr<CPerson> ptrPerson = make_unique<CPerson>("James Hetfield", 59);
    shared_ptr<CPerson> ptrPerson = make_shared<CPerson>("James Hetfield", 59);
    ptrPerson->ShowPersonInfo();
    cout << "Currently Own count : " << ptrPerson.use_count() << endl;
    auto james = ptrPerson;
    ptrPerson->ShowPersonInfo();
    cout << "Currently Own count : " << ptrPerson.use_count() << endl; // 레퍼런스가 2개가 되고 있는것.
    ptrPerson->ShowPersonInfo();
    james.reset(); //메모리를 날려서 다시 하나가 된것
    return 0;
}

CPerson::CPerson(const string& name, int age)
{
    strName = name;
    nAge = age;
    cout << "Object constructor!!!" << endl;
}

void CPerson::ShowPersonInfo()
{
    cout << strName << "'s Age: " << nAge << endl;
}