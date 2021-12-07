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
    int maxLen = INT_MIN;
    int count = 0;
    int diff = arr[0] - arr[1];
    for (int i = 0; i < (n - 1); i++)
    {
        if ((arr[i] - arr[i + 1]) == diff)
        {
            count++;
            // cout<<"---"<<arr[i]<<" "<<arr[i+1]<<" "<<count<<" "<< endl;
            maxLen = max(count, maxLen);
        }
        else
        {
            // cout<<arr[i]<<" "<<arr[i+1]<<" "<<count<<" "<< endl;
            diff = arr[i] - arr[i + 1];

            count = 1;
        }
    }
    cout << maxLen + 1;
}