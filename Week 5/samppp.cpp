#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;

};

node* head=NULL;

void push(int x)
{
    cout<<"Pushing "<<x<<" into the node"<<endl;
    node* p;
    node* new_node;
    new_node=new node();
    p=head;
    new_node->data=x;

    if(head == NULL){
        head = new_node;
        return;
    }
    while(p->next!=NULL)           //p is current node used for traversing the linkedlist to insert at the end
    {
        p=p->next;
    }
    p->next=new_node;
    new_node->next=NULL;
}

void display()
{
    node* t;
    t=head;
    while(t!=NULL)
    {
        cout<<t->data;
        t=t->next;
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    display();
    return 0;
}