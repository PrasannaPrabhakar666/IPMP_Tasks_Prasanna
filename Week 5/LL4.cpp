                                        //PROBLEM 4 FROM LINKEDLIST
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
    cout<<"Appending "<<x<<"to the linkedlist"<<endl;
    struct node *p,*new_node;
    new_node=new node();
    p=*head;
    new_node->data=x;
    new_node->next=NULL;
    if(*head==NULL)
    {
        *head=new_node;
        new_node->prev=NULL;
        return;
    }
    while(p->next!=NULL)
    {
        p=p->next;
    }
    new_node->prev=p;
    p->next=new_node;
    return;

    
}

void previous(struct node **head)
{
    struct node *o;
    o=*head;
    while(o->next!=NULL)
    {
        cout<<o->prev<<"is the previous of"<<o->data<<endl;
        o=o->next;
    }
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

int checkPalindrome(struct node **head)
{
    struct node *p,*tail,*q;
    p=*head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    tail=p;
    q=*head;
    while(q!=tail && q->next!=tail)
    {
        if(q->data==tail->data)
        {
        q=q->next;
            tail=tail->prev;
           // cout<<"checking"<<endl;
        }
        else
        return -1;
    }
    cout<<"It is a palindrome";
    return 1;

}

int main()
{
    struct node *head=NULL;
    append(&head,1);
    append(&head,2);
    append(&head,3);
    append(&head,4);
    append(&head,3);
    append(&head,2);
    append(&head,1);
    //append(&head,7);
    display(&head);
    checkPalindrome(&head);
   // previous(&head);


    

    return 0;
}