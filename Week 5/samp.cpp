#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;

};
void push(struct node **headref,int x)
{
    struct node *t,*p;
    p=*headref;
    t=(struct node*)malloc(sizeof(struct node));
    if(*headref==NULL)
    {
      * headref=t;
      return ;
    }
    t->data=x;
    t->next=NULL;
    while(p->next!=NULL)
    {
        p=p->next;

    }
    
    p->next=t;
}

void display(struct node**headref)

{
    struct node *p;
    p=*headref;
    while(p->next!=NULL)
    {
        cout<<p->data<<"\t\t";
        p=p->next;

    }
}

int main()
{
    struct node *head=NULL;
    cout<<"Working"<<endl;
    push(&head,1);
   cout<<"Working 1";
    push(&head,2);
    push(&head,4);
    push(&head,5);
    push(&head,6);
    push(&head,7);
    push(&head,8);
    display(&head);
    cout<<"Finished";

    return 0;
    

       

        


}

