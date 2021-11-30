#include <iostream>
#include<list>

using namespace std;

void display(list<int> &l){
    list<int>:: iterator it;
    for(it = l.begin(); it!= l.end() ; it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main() {
    list<int> list1;
    int size1;
    cout<<"Enter Number of values";
    cin>>size1;
    for(int i = 0 ; i < size1 ; i++)
    {
        int val;
        cin>>val;
        list1.push_back(val);
    }
    display(list1);
    list<int> list2;
    int size2;
    cout<<"Enter Number of values";
    cin>>size2;
    for(int i = 0 ; i < size2 ; i++)
    {
        int val;
        cin>>val;
        list2.push_back(val);
    }
    display(list2);
    list1.sort();
    display(list1);
    list2.reverse();
    display(list2);
    list1.merge(list2);
    display(list1);
    list1.sort();
    display(list1);
    // int x = list1.pop_back();
    // cout<<x;
    // x = list1.pop_front();
    // cout<<x;
    // cout<<"Enter value to be deleted";
    // cin>>x; 
    // list1.remove(x);
    // list<int> l(5);
    // l.push_back(15);
    // display(l);
}
