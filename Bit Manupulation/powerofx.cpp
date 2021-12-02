#include <iostream>
using namespace std;

bool checkPowerOf2(int n)
{
    int c = 0;
    while (c <= n)
    {
        if (1 << c == n)
        {
            return true;
        }
        else
        {
            c++;
        }
    }
    return false;
}

int main()
{
    cout << checkPowerOf2(255);
}