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

    int val;
    cin>>val;

    for (int i=0; i<n; i++)
    {
        if (arr[i]==val)
        {
            cout<<"index is "<<i;
        }
    }

}