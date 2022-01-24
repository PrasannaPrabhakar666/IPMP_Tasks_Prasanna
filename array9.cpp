#include<iostream>
#include<math.h>
using namespace std;

void check(int n)
{
    int temp,k;
    for(int i=1;i<=n;i++)
    {
        for( int j=i;j<=n;j++)
        {
            temp=i*i +j*j ;
            k = sqrt(temp);
            if(k*k==temp&&k<=n)
            {
                cout<<"Triplets found. They are  "<<i<<"  "<<j<<"  "<<k<<endl;
            }

            
        }
    }
   // cout<<"Triplets not found"<<endl;
}
int main()
{
    int n;
    cout<<"Enter the value"<<endl;
    cin>>n;
    check(n);
  /*  int i=5,j=8;
    int temp;
    float k;
    temp=i*i+j*j;
    k= sqrt(temp);
    cout<<"k is"<<k<<endl;
    if(k==i)
    cout<<"They are equal";
    else
    cout<<"They arent equal";*/
    return 0;
}