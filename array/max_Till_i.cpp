#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int(n);
    int *arrNew = new int(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxEle = arr[0];
    arrNew[0] = maxEle;
    for (int i = 1; i < n; i++)
    {

        if (arr[i] > maxEle)
        {
            maxEle = arr[i];
        }

        arrNew[i] = maxEle;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arrNew[i] << " ";
    }
}