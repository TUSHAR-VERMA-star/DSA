#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    int maxEle = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxEle = max(arr[i], maxEle);
        if (i == (n - 1))
        {
            if (arr[i] == maxEle)
            {
                count++;
            }
        }
        else if (maxEle == arr[i] && arr[i] > arr[i + 1])
        {
            count++;
        }
    }
    cout << count;
}