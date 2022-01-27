#include <iostream>
#include "CBox.h"

using namespace std;

int main()
{
    CBox box1;
    CBox box2;
    CBox box3;
    double volume = 0.0f;

    box1.SetLength(6.5); //정보의 은닉 외부에 노출시키고 싶지않다.
    box1.SetBreadth(7.0);
    box1.SetHeight(5.0);
    // box1.m_length = 4.0f;

    box2.SetLength(12.5);
    box2.SetBreadth(13.0);
    box2.SetHeight(10.25);

    // box3.SetLength(6.5);
    // box3.SetBreadth(7.0);
    // box3.SetHeight(5.0);

    volume = box1.GetVolume();
    cout << "Volume of box1 : " << volume << endl;

    volume = box2.GetVolume();
    cout << "Volume of box2 : " << volume << endl;

    box3 = box1 + box2; //더해줄 box box1 = this  그냥 변수이름은 주소이다.
    volume = box3.GetVolume();
    // cout << "Volume of box3 : " << volume << endl;
    cout << "Volume of box3 : " << (box1 + box2).GetVolume() << endl;




    return 0;
}