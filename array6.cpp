#include<iostream>
using namespace std;
void palindrome(int a[],int n)
{
    int p,no=1;
    int mid;
    for(int i=0,j=n-1;j>=i;i++,j--)
    {
        if(a[i]==a[j]&&a[i]==9)
        {
            
        }
        else
        p= -1;

    }
    p= 1;
    cout<<"P is"<<p<<endl;
if(n%2==0)
{
    mid=n/2;
}
else{
    mid=n/2;
}

while(p==1 && no<n-mid)
{
    if(a[mid]==9)
    {
        a[mid]=0;
    while(a[mid-no]==9&&a[mid+no]==9)
    {
        a[mid-no]+=1;
        a[mid+no]+=1;
        no=n;
    }
    }
    else{
        a[mid]+=1;
        no=n;
    }
}
cout<<"The next palindrome is"<<endl;
for(int k=0;k<n;k++)
{
    cout<<" "<<a[k];
}

}
int main()
{
    int a[]={1,2,9,2,1};
    palindrome(a,5);
    return 0;

}