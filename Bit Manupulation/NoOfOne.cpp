#include <iostream>
using namespace std;

int NoOfOne(int n)
{
    int c=0;
    while (n!=0)
    {
        c++;
        n=n & (n-1);
    }
    return c;
    
}

int main()
{
    cout << NoOfOne(16);
}