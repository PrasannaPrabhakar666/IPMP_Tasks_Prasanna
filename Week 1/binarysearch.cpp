#include<iostream>
using namespace std;

int binSearch(int a[],int ele,int n)
{
    int high,low,mid;
    low=0;
    high=n-1;
    while(high>=low)
    {
        mid=(high+low)/2;
        if(a[mid]==ele)
        {
            return mid;
        }
        else if(ele<a[mid])
        {
            high=mid-1;
        }
        else if(ele>a[mid])
        {
            low=mid+1;
        }
        else if(high==low)
        {
            
            return low;
        }
    }
return -1;
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,11,13,15,16,18,22,24,25,29};
    int ele,n,res;
    cout<<"Enter th element to be found";
    cin>>ele;
    n=sizeof(a)/sizeof(int);
    res=binSearch(a,ele,n);
  if(res== -1)
  {
      cout<<"Element not found";
      
  }
  else
      cout<<"Element found at index"<<res;

      return 0;
}