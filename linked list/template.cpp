#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node * next;
        Node(int val)
        {
            this->data = val;
            this->next = nullptr;
        }
};
Node *makeLL()
{
    int val;
    cin>>val;
    Node * head = nullptr;
    Node * temp = nullptr;
    while(val != -1)
    {
        Node * node =  new Node(val);
        if(head == nullptr)
        {
            head = node;
            temp = head;
        }
        else
        {
            temp->next = node;
            temp = temp->next;
        }
        cin>>val;
    }
    return head;
}
int main(){

    Node * head = makeLL();
    Node * temp = head;
    while(temp != nullptr)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }

}
