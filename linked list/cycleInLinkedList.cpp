//Floyd's Algorithm
//Hare and Tortoise Algorithm
//this is for checking whether a linked list have cylce or not

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {

        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{

    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void makeCycle(node *&head, int k)
{
    int count = 1;
    node *temp = head;
    node *cyclenode;
    while (temp->next != NULL)
    {
        if (count == k)
        {
            cyclenode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = cyclenode;
}

bool checkCycle(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    while (head->next != NULL)
    {
        head = head->next;
        if (head->next <= head)
        {
            return true;
        }
    }
    return false;
    // node*fast=head;
    // node*slow=head;
    // while(fast!=NULL || fast->next!=NULL){
    //     fast=fast->next->next;
    //     slow=slow->next;
    //     if (fast==slow){
    //         return true;
    //     }
    // }
    // return false;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

    display(head);

    // makeCycle(head,3);

    cout << checkCycle(head);

    // display(head);

    return 0;
}