#include <bits/stdc++.h>

using namespace std;
class node_with_constructor{
    public:
    int data;
    node_with_constructor* next;
    node_with_constructor(int value)
    {
        data = value;
        //next pointer is pointed to NULL
        next = NULL;
    }
};


void insertathead(node_with_constructor*&head, int val)
{
    node_with_constructor* n = new node_with_constructor(val);
    n->next = head;
    head = n;
}

void insertafter(node_with_constructor* head, int key, int val)
{
    node_with_constructor* n = new node_with_constructor(val);
    if(key== head->data)
    {
        n->next = head->next;
        head->next =n;
        return;
    }
    node_with_constructor* temp = head;
    while(temp->data!=key)
    {
        temp = temp->next;
        if(temp == NULL)
        {
            return;
        }
    }
    n->next = temp->next;
    temp->next =n;
}



void insertattail(node_with_constructor*& head, int val)
{
    node_with_constructor* n = new node_with_constructor(val);
    if (head == NULL) {
        head = n;
        return;
    }
  
    node_with_constructor* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

void print(node_with_constructor*& head)
{
    node_with_constructor* temp = head;
  
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
  


int main()
{
    node_with_constructor* head = NULL;
    insertathead(head, 1);
    insertathead(head, 2);
    cout << "After insertion at head: ";
    print(head);
    cout << endl;
  
    insertattail(head, 4);
    insertattail(head, 5);
    cout << "After insertion at tail: ";
    print(head);
    cout << endl;
  
    insertafter(head, 1, 2);
    insertafter(head, 5, 6);
    cout << "After insertion at a given position: ";
    print(head);
    cout << endl;
    return 0;
}

