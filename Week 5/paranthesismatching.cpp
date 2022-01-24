//#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;

class node
{
    public:
    char data;
    node * next;

};

class stack
{
    private:
    node *top;
    //int size;
    public:
    stack();
    ~stack();
   int isfull();
    int isempty();
    void push(char x);
    char pop();
    char stacktop();
    char peek(int index);
    


};

stack::stack()
{
    top=nullptr;

}

stack::~stack()
{
    node *p;
    p=top;
    while(top)
    {
    top=top->next;
    delete p;
    p=top;
    }


}
char stack::stacktop()
{
    return top->data;
}

void stack::push(char x)
{
    node *newchar;
    newchar=new node();
    if(newchar==NULL)
    cout<<"Stack overflow"<<endl;
    else
    {
        newchar->data=x;
        newchar->next=top;
        top=newchar;
    }


}
int stack:: isfull()
{
    node *full;
    full=new node();
    
    int r= full?1:0;
    delete full;
    return r;


}

int stack::isempty()
{
    return top?0:1;

}
char stack::pop()
{
    char f;
    struct node *p;
    p=top;
    f=top->data;
    top=top->next;
    delete p;
    return f;

}
 
 char stack::peek(int index)
 {
     if(isempty())
     return -1;
     else 
     {
         node *p=top;
         for(int i=0;i<index-1 && p!=nullptr;i++)
         p=p->next;
         if(p!=nullptr)
         return p->data;
         else 
         return -1;
     }
 }

int isbalanced(char *exp)
{
    stack st;
    for(int i=0;i<strlen(exp);i++)
    {
    if(exp[i]=='(')
    st.push('(');
    else if(exp[i]==')')
    {
        if(st.isempty())
        {
            return false;
        }
        else{
            st.pop();
        }
    }
    }

    return st.isempty()?true:false;

}
int isbalancedmultiple(char *exp)
{
    cout<<"function called";
    cout<<"string length"<<strlen(exp)<<endl;
    stack stk;
    for(int j=0;j<strlen(exp);j++)
    {
        cout<<"loop"<<j<<"sucessful"<<endl;
        if(exp[j]=='('||exp[j]=='['||exp[j]=='{')
        stk.push(exp[j]);
        else if(exp[j]==')')
        {
            if(stk.stacktop()=='(')
            cout<<stk.pop()<<endl;
            else
            return false;
        }
        else if(exp[j]=='}')
        {
            if(stk.stacktop()=='{')
            cout<<stk.pop()<<endl;
            else 
            return false;
        }
        else if(exp[j]==']')
        {
            if(stk.stacktop()=='[')
           cout<< stk.pop()<<endl;
            else
            return false;
        }
        
       
    }
    if(stk.isempty())
    return true;
    else 
    return false;
}
int main()
{
   // char E[]="((a+b)*c)-f(d+f)-((o+p)-i)";
   // cout<<isbalanced(E)<<endl;
    char f[]="{(a+b)+[d+e]}-((a+d)-[t+y]-{u+i})";
    cout<<"CHECKING Multiple brackets expression"<<endl;
    cout<<isbalancedmultiple(f);

}
