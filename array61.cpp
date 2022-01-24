#include<iostream>
using namespace std;

void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i];

}

void all9(int n)
{
    cout<<"1";
    for(int i=0;i<n-2;i++)
    cout<<"0";
    cout<<"1";
}

void nextpalindrome(int a[],int n)
{
    int mid,i,j,carry=1;
    bool leftsmaller=false;
    mid=n/2;
    i=mid-1;
    j= n%2?mid+1:mid;
    while(i>=0&&a[i]==a[j])
    {
        i--;
        j++;
    }
    if(i<0||a[i]<a[j])
    {
        leftsmaller=true;
    }
     /*   a[mid]+=carry;
        carry=a[mid]/10;
        a[mid]%=10;
        i=mid-1;
    j= n%2?mid+1:mid;*/
    if(leftsmaller)
    {
        a[mid]+=carry;
        carry=a[mid]/10;
        a[mid]%=10;
        i=mid-1;
    j= n%2?mid+1:mid;

    }
    else{
        
    }


    while(i>=0)
    {
        a[i]+=carry;
        carry=a[i]/10;
        a[i]%=10;
        a[j]=a[i];
        i--;
        j++;
    }

    cout<<"The next palindrome is "<<printarray(a,n);


}