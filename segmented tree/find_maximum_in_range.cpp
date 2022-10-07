#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int arr[100005], seg[4*100005];
void build(int i, int low, int high)
{
    if(low == high)
    {
        seg[i] = arr[low];
        return;
    }
    int mid = (low+high)/2;
    build(2*i+1, low, mid);
    build(2*i+2, mid+1, high);
    seg[i]= max(seg[2*i+1], seg[2*i+2]);
}
int query(int idx , int low, int high, int l, int r)
{
    if(low>=l && high<=r) return seg[idx];
    if(high<l || low>r) return INT_MIN;
    int mid = (low+high)/2;
    int left = query(2*idx+1, low, mid, l, r);
    int right = query(2*idx+2, mid+1, high, l, r);
    return max(left, right);
}
int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    build(0, 0, n-1);
    // for(int i=0; i<(4*n); i++)
    // {
    //     cout<<seg[i]<<" ";
    // }
    int q;
    cin>>q;
    while(q--)
    {
        int l, r;
        cin>>l>>r;
        int ans = query(0, 0, n-1, l, r);
        cout<<ans<<endl;
    }
}
