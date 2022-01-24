#include<iostream>
using namespace std;

void uni(int a[],int b[],int s1,int s2)
{
   // int m=sizeof(a)/sizeof(int)+sizeof(b)/sizeof(int);
    int k=0;
    int m=s1+s2;
    int c[m];
    int i=0,j=0,t1=0;
    while(i<s1&&j<s2)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
            t1++;
        }
        else if(b[j]<a[i])
        {
            c[k++]=b[j++];
            t1++;
        }
        else 
        {
            c[k++]=a[i++];
            j++;
            t1++;
        }
    }
    for( ;i<s1;i++)
    {
        c[k++]=a[i++];
        t1++;
    }
    for( ;j<s2;j++)
    {
        c[k++]=b[j++];
        t1++;
    }
cout <<"The union list is"<<endl;
    for(int n=0;n<t1;n++)
    {
        cout<<c[n]<<"  ";
    }

}

void intersection(int a[],int b[],int m,int n)
{
    int t= m>n?n:m;
    int c[t],i=0,j=0,k=0,t2=0;
    while(1<m&&j<n)
    {
        if(a[i]<b[j])
        {
            i++;
        }
        else if(b[j]<a[i])
        {
            j++;
        }
        else if(a[i]==b[j])
        {
            c[k++]=a[i++];
            j++;
            t2++;
        }

    }
    cout<<endl<<"the intersection of the array is"<<endl;
    for(int p=0;p<t2;p++)
    {
        cout<<c[p]<<"  ";
    }

}

int main()
{
    int s1=0,s2=0;
    cout<<"Enter the size of array 1"<<endl;
    cin>>s1;
    int a[s1];
    cout<<"Enter the elements of first array"<<endl;
    for(int i=0;i<s1;i++)
    {
        cin>>a[i];
        cout<<endl;
    }
    
    cout<<"Enter the no. of elements of second array "<<endl;
    cin>>s2;
    int b[s2];
    cout<<"Enter the elements of second array"<<endl;
    for(int j=0;j<s2;j++)
    {
        cin>>b[j];
        cout<<endl;
    }
    uni(a,b,s1,s2);
    intersection(a,b,s1,s2);
    return 0;
  

}
