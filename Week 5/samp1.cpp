#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
node *head=NULL;

/*void append(struct node *head,int x)
{
    cout<<"Appending "<<x<<"in to the list"<<endl;
    struct node *new_node,*last;
    new_node=new node();
   // last=(struct node *)malloc(sizeof(struct node));
    last=head;
    new_node->data=x;
    //new_node->next=NULL;
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=new_node;
    new_node->next=NULL;

    
}*/
void append(node* head,int data){
    cout<<"Appending "<<data<<" into the list..."<<endl;
    node* curr_node=head;
    node* new_node=new node();
    new_node->data=data;
    while(curr_node->next!=NULL)
        curr_node=curr_node->next;
    curr_node->next=new_node;
    new_node->next=NULL;
    return;
}
void display()
{
    struct node *t;
    t=head;
    while(t!=NULL)
    {
        cout<<t->data<<endl;;
        t=t->next;
    }
}
int main()
{
    append(head,1);
    append(head,2);
    append(head,3);
    append(head,4);
    append(head,5);
    append(head,6);
    append(head,7);
    display();
    return 0;

}