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
    int val;
    cin >> val;
    int left = 0;
    int right = n - 1;
    
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == val)
        {
            cout<<"found at "<<mid;
            break;
        }
        else if (arr[mid] > val)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
}
