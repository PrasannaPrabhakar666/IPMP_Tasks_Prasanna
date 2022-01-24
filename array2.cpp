#include<iostream>
using namespace std;
int bruteforce(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        int count=0;
        for(int j=0;j<size;j++)
        {
            if(a[i]==a[j])
            count++;
        }

        if(count%2==1)
        return a[i];
    }
    
}

int XORapproach(int a[],int size)
{
    int res=0;
    for(int i=0;i<size;i++)
    {
        res=res^a[i];
    }
    return res;
}

int main()
{
    int a[]={1,1,1,1,1,1,2,3,5,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<"The answer through bruteforce method is "<<bruteforce(a,size)<<endl;
    cout<<"The answer through XOR approach is "<<XORapproach(a,size);
    return 0;
}