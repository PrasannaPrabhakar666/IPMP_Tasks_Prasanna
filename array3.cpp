#include<iostream>
using namespace std;

int bruteforce(int a[],int n)
{
    int sum=(n+1)*(n+2)/2;
    for(int i=0;i<n;i++)
    {
        sum-=a[i];
    }
    return sum;
}
int findusingXOR(int a[],int n)
{
    int res1=0,res2=0;
    for(int i=0;i<n;i++)
    {
        res1=res1^i;
        res2=res2^a[i];
    }
    res1=res1^n;
    res1=res1^n+1;

    return res1^res2;
}
int main()
{
    int a[]={1,2,4,5,6,7,8,9,10,11};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Answer using bruteforce  "<<bruteforce(a,n)<<endl;
    cout<<"Answer using XOR  "<<findusingXOR(a,n)<<endl;
    return 0;

}