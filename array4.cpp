#include<iostream>
using namespace std;

void getnonrepeat(int a[],int n,int *x,int *y)
{
     *x=0;
     *y=0;
     int XOR=a[0];
     int setbit;
     for(int i=1;i<n;i++)
     {
         XOR=XOR^a[i];

     }
     setbit= (XOR) & ~(XOR-1);
     for(int j=0;j<n;j++)
     {
         if(a[j]&setbit)
         {
             *x=*x^a[j];
         }
         else{
             *y=*y^a[j];
         }
     }
}
int main()
{
    int a[]={1,2,3,4,5,6,7,2,4,5,6,7};
    int *x,*y,n;
    x =new int();
    y =new int ();
    n=sizeof(a)/sizeof(*a);
    cout<<"MAin working"<<endl;
    getnonrepeat(a,n,x,y);
    cout<<"First non repeating element "<<*x<<endl;
    cout<<"Second non repeating elememt "<<*y<<endl;
return 0;

}
