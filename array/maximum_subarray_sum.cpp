// Cumulative sum approach 
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
    int allsum[n];
    int sum=0;
    for (int i=0 ; i<n; i++)
    {
        sum+=arr[i];
        allsum[i]=sum;
    }
    for (int i = 0 ; i < n; i++)
    {
        cout<<allsum[i] << " ";
    }
    cout<<endl;
    int maxx=INT_MIN;
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<(i-1) ;j++)
        {
            sum=allsum[i]-allsum[j];
            maxx=max(maxx,sum);
        }
    }
    cout<<maxx;
}