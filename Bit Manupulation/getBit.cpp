#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int i = 2;
    int check = 1 << i;
    if ((check & num) != 0)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
}