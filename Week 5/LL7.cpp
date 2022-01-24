                                        //PROBLEM 7 FROM LINKEDLIST
                                         //WEEK 5 DAY 2
                                         //DATE : 22/12/2021

#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

void append(struct node **head,int x)
{
    cout<<"Appending "<<x<<" into the list"<<endl;
    struct node *p,*new_node;
    new_node=new node();
    p=*head;
    new_node->data=x;
    new_node->next=NULL;
    if(*head==NULL)
    {
        *head=new_node;
        new_node->prev=NULL;
        return ;
    }
    while(p->next!=NULL)
    {
        p=p->next;
    }
    new_node->prev=p;
    p->next=new_node;
    return ;
}
void display(struct node **head)
{
    cout<<"Displaying"<<endl;
   struct node *t;
    t=*head;
    while(t!=NULL)
    {
        cout<<t->data<<endl;
        t=t->next;
    }
}

void middleLL(struct node **head)
{
    cout<<"Finding middle element"<<endl;
    struct node *tail,*p;
    p=*head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    tail=p;
    p=*head;
    while(p!=tail && p->next!=tail)
    {
        p=p->next;
        tail=tail->prev;
    }
    cout<<"The middle element is"<<p->data;

}

int main()
{
    struct node *head=NULL;
    append(&head,1);
    append(&head,2);
    append(&head,3);
    append(&head,4);
    append(&head,5);
    append(&head,6);
    append(&head,7);
    append(&head,8);
    append(&head,9);
    display(&head);
    middleLL(&head);
    return 0;

}