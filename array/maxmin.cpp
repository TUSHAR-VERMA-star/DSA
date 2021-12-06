#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr=new int(n);
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int maxVal=INT_MIN;
    int minVal=INT_MAX;

    for (int i=0; i<n; i++)
    {
        if (arr[i]>maxVal)
        {
            maxVal=arr[i];
        }
        if (arr[i]<minVal)
        {
            minVal=arr[i];
        }
    }
    cout<<maxVal<<" "<<minVal<<endl;
}