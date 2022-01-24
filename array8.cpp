#include<iostream>
using namespace std;

int checksum(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==x)
            {
                cout <<"Pair found"<<endl;
                cout<<"The pairs are  "<<a[i]<<" And  "<<a[j]<<endl;
                return 0;
            }
           
        }
    }
    return -1;

}

int main()
{
    int a[]={1,2,3,4,-1,-4,7,8,5,21};
    int n=sizeof(a)/sizeof(int);
    int x;
    cout<<"Enter the sum to be found"<<endl;
    cin>>x;
    cout<<endl<<checksum(a,n,x)<<endl;

return 0;
     
}