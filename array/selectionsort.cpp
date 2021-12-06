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
    for (int i = 0; i < n - 1; i++)
    {
        int minVal = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minVal])
            {
                minVal = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minVal];
        arr[minVal] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// 6
// 12 18 20 42 8 10