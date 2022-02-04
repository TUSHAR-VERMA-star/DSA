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
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
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
int search(node *head, int val)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == val)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}
void deleteElement(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    node *temp = head;
    node *temp2;
    if (head->data == val)
    {
        head = temp->next;
        return;
    }

    while (temp->data != val)
    {
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = temp->next;
}
void deleteFirst(node *&head)
{
    node *temp = head;
    head = temp->next;
}
void deleteLast(node *head)
{
    node *temp = head;
    node *temp2;
    while (temp->next != NULL)
    {
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = NULL;
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

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

    display(head);

    insertAtHead(head, 5);

    display(head);

    cout << search(head, 1) << endl;

    deleteLast(head);

    display(head);

    deleteFirst(head);

    display(head);

    deleteElement(head, 2);

    display(head);

    insertAtTail(head, 2);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    display(head);

    deleteElement(head, 6);

    display(head);

    return 0;
}