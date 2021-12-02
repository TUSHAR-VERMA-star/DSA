#include <iostream>
using namespace std;

int clearBit(int num, int pos)
{
    return (num & ~(1 << pos));
}

int main()
{
    cout << clearBit(5, 2);
    cout << clearBit(5, 1);
}