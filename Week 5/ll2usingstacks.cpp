#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;

};

class stack
{
    private :
    node *top=nullptr;
    public:
    void push(int x);
    int pop();
    int isempty();

};

void stack::push(int x)
{
   // cout<<"pushing"<<endl;
    node *new_node;
    new_node=new node();
    new_node->data=x;
    new_node->next=top;
    top=new_node;

}
int stack::pop()
{
    node *p;
    int t;
    p=top;
    if(top!=NULL)
    {
    t=top->data;
    top=top->next;
   delete p;
    return t;
    }
    else
    return -1;
    

}

int stack::isempty()
{
    return top?0:1;
}

void reverse(stack stk)
{
    cout<<"reverse"<<endl;
    stack st;
    st=stk;
    while(!st.isempty())
    {
       // cout<<"revrerse loop running 1"<<endl;
        cout<<"popping  "<<st.pop()<<"  popping done"<<endl;
       // cout<<"reverse loop running 2"<<endl;
    }
   // cout<<"lop reverse not running"<<endl;
}

int main()
{
   // cout<<"main"<<endl;
    stack stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.push(6);
    stk.push(7);
    stk.push(8);
    stk.push(9);
    reverse(stk);
    return 0;

}