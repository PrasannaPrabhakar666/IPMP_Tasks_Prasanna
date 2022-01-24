                                        //PROBLEM 5 FROM LINKEDLIST
                                         //WEEK 5 DAY 2
                                         //DATE : 22/12/2021
#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;

};

void append(struct node **head,int x)
{
    cout<<"Appending "<<x<<"to the linkedlist"<<endl;
    struct node *p,*new_node;
    new_node=new node();
    p=*head;
    new_node->data=x;
    new_node->next=NULL;
    if(*head==NULL)
    {
        *head=new_node;
        return;
    }
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=new_node;

    
}

void display(struct node **head)
{
   struct node *t;
    t=*head;
    while(t!=NULL)
    {
        cout<<t->data<<endl;
        t=t->next;
    }
}

void isloop(struct node **head)
{
    struct node *p,*q;
    p=q=*head;
    do
    {
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    }while(p&&q && p!=q);
    if(p==q)
    cout<<"loop detected";
    else
    cout<<"Loop not detected";

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
    display(&head);
    isloop(&head);
    

    return 0;
}