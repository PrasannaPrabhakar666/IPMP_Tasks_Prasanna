                                                // QUESTION 1
                                                // TO FIND IF A NO IS A POWER OF 2
 #include<iostream>
 using namespace std;
 bool checkPowerof2(int n)
 {
     if((n&n-1) ==0)
     {
         return true;
     }
     else
     return false;
 }       

 int main()
 {
     int n;
     cout<<"Enter the number to check if its a power of 2\n";
     cin>>n;
     cout<<checkPowerof2(n);
     return 0;
 }                                        