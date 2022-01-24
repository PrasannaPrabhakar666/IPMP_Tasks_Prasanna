#include<iostream>
using namespace std;

void oddrepeat(int a[],int n)
{
    int setbit=0;
    int x=0,y=0;
    int XOR=a[0];
    for(int i=1;i<n;i++)
    {
        XOR^=a[i];
    }
    setbit=XOR & ~(XOR-1);
    for (int j = 0; j < n; j++)
    {
        if(a[j]&setbit)
        {
            x=x^a[j];
        }
        else
        {
            y=y^a[j];
        }
    }

    cout<<"The odd repeating elements are "<<x<<" and  "<<y<<endl;
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,5,7};
   int n=sizeof(a)/sizeof(*a);
   oddrepeat(a,n);
return 0;

}