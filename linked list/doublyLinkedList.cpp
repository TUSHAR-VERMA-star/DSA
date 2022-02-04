#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *pre;

public:
    node(int val)
    {
        data = val;
        next = NULL;
        pre = NULL;
    }
};
class doublyLinkedList
{
public:
    node *head, *tail;
    int size;

public:
    doublyLinkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void insertAaTail(int val)
    {
        node *temp = new node(val);
        if (head == NULL)
        {
            head = temp;
            size = 1;
            return;
        }
        node *trv = head;
        while (trv->next != NULL)
        {
            trv = trv->next;
        }
        trv->next = temp;
        temp->pre = trv;
        tail = temp;
        size += 1;
    }
    void insertAaHead(int val)
    {
        node *temp = new node(val);
        temp->next = head;
        head->pre = temp;
        head = temp;
        size++;
    }
    void insertAaPos(int val, int pos)
    {
        if (pos == (size - 1))
        {
            insertAaTail(val);
            return;
        }
        node *temp = new node(val);
        node *trv = head;
        while (pos - 1 > 0)
        {
            pos--;
            trv = trv->next;
        }
        temp->next = trv->next;
        trv->next->pre = temp;
        trv->next = temp;
        temp->pre = trv;
        size++;
    }
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void display2()
    {
        node *temp = tail;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->pre;
        }
        cout << endl;
    }
    void deleteAtPos(int pos){
        node*temp=head;
        while(pos-1>0){
            pos--;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        temp->next->next->pre=temp;
    }
};

int main()
{
    doublyLinkedList dll;

    dll.insertAaTail(1);
    dll.insertAaTail(2);
    dll.insertAaTail(3);
    dll.insertAaTail(4);

    dll.insertAaHead(5);

    // dll.display();

    dll.insertAaPos(10, 2);

    dll.display();
    // dll.display2();

    dll.deleteAtPos(3);
    dll.display();
}