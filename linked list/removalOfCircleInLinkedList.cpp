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
    node *fast = head;
    node *slow = head;
    while (fast != NULL || fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
void removalOfCyle(node *&head)
{

    node *fast = head;
    node *slow = head;

    while (fast != NULL || fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            fast = head;
            while (true)
            {
                fast = fast->next;
                slow = slow->next;
                if (fast->next == slow->next)
                {
                    slow->next = NULL;
                    return;
                }
            }
        }
    }
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 8);

    display(head);

    makeCycle(head, 5);

    cout << checkCycle(head) << endl;

    removalOfCyle(head);

    display(head);

    cout << checkCycle(head) << endl;

    return 0;
}