                                         //PROBLEM 3 FROM LINKEDLIST
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

struct node * reverse(struct node **head)
{
    struct node *curr_node,*next_node;
    static node *prev_node=NULL;
        curr_node=*head;
    next_node=curr_node->next;
    curr_node->next=prev_node;
    if(next_node==NULL)
    {
       // curr_node->next=prev_node;
        *head=curr_node;
        return *head;
    }
    else{
        prev_node=curr_node;
        reverse(&next_node);
    }

}



int main()
{
    struct node *head=NULL,*head1;
    append(&head,1);
    append(&head,2);
    append(&head,3);
    append(&head,4);
    append(&head,5);
    append(&head,6);
    append(&head,7);
    cout<<"Linkedlist before reversing"<<endl;
    display(&head);
    cout<<"Linkedlist after reversing"<<endl;
   head1= reverse(&head);
    display(&head1);

    return 0;
}