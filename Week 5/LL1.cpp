
                                         //PROBLEM 1 FROM LINKEDLIST
                                         //WEEK 5 DAY 2
                                         //DATE : 22/12/2021
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;

}*top=NULL;
void push(int x)
{
    struct node *t;
    t=(struct node *)malloc (sizeof(struct node));
    t->data=x;
    t->next=top;
    top=t;

}
int nthNodeFromLast(int n)
{ 
    
    struct node *p;
    p=top;
    for(int i=0;i<n;i++)
    {
        if(p->next==NULL)
        return -1;
        else
        p=p->next;

    }
   // p=p->next;
    return p->data;
    
}
int main()
{
    int n;
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);

    cout<<"Enter n";
    cin>>n;
    cout<<"The element at"<<n<< "th node from last is : "<<nthNodeFromLast(n);
return 0;
}
// Time complexity=o(n) since only one loop is running.
// The  order of linkedlist in the above program is 9->8->7->6->5->4->3->2->1->NULL
// So the nth node from the last is same as traversing the loop from front.