#include <iostream>
#include <bitset>

int main()
{
    int x = 100 + 200 ;
    int y = x + 400;
    float z = (float)y / (float)x;
    int xx = y % x;
    
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "z = " << z << std::endl;
    std::cout << "xx = " << xx << std::endl;

    int nNumber = 10;
    nNumber += 25;

    std::cout << "nNumber : " << nNumber << std::endl;

    int isX = 10, isY = 11;
    std::cout << "Return value : " << (isX != isY) << std::endl;

    // 60 : 0011 1100, 13 : 0000 1101
    unsigned char A = 60, B = 13;
    std::cout <<  "(A & B) : " << std::bitset<8>(A & B) << std::endl;
    std::cout <<  "(A ! B) : " << std::bitset<8>(A | B) << std::endl;
    std::cout <<  "(A ^ B) : " << std::bitset<8>(A ^ B) << std::endl;
    std::cout <<  "~A : " << std::bitset<8>(~A) << std::endl;

    return 0;
}