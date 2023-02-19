#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

//Given a reference (pointer to pointer ) to head of list and int
//insert a new node on the front of the list

void push_first(Node** head_ref, int new_data)
{
    //allocate node
    Node* new_node = new Node();
    
    //put the data
    new_node->data = new_data;
    
    //new node point as new as head
    
    new_node -> next = (*head_ref);
    //move the head point to new Node
    (*head_ref) = new_node;
    
}
//given a node prev_node , insert a new node after the given prev_node

void insertAfter(Node* prev_node, int new_data)
{
    if(prev_node == NULL)
    {
        cout<<"The given previous nnode cannot be null";
        return;
    }
        
        //Allocate new Node
        Node* new_node = new Node();
        
        //Put in the data
        new_node->data = new_data;
        
        //make next node point to next of prev_node
        new_node->next = prev_node -> next;
        
        //move the next of prev_node as new_node
        
        prev_node->next = new_node;
    }
    
    


void last_node(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    Node *last = *head_ref;
    
    new_node->data = new_data;
    new_node->next = NULL;
    //if the linked list is empty then make new node as head
    if(*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    
    while(last->next !=NULL)
    {
        last = last->next;
    }
    //change the next of last node
    last->next = new_node;
    
    return;
}

void printList(Node *node)
{
    while(node!=NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}
int main()
{
    //empty list
    Node *head =NULL;
    push_first(&head, 6);
    push_first(&head, 8);
    last_node(&head, 4);
    insertAfter(head->next->next, 3);
    cout<<"Created Linked list is: "; 
    printList(head); 
}

