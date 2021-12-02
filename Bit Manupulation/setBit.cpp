#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int i = 1;
    int check = 1 << i;
    int ans = (check | num);
    cout << ans;
}
