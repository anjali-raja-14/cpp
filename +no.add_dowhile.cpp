#include <iostream>
using namespace std;
int main()
{
     int n=0,sum=0;
   do
   {  sum=sum+n;
      cout<<"Enter a number: ";
      cin>>n;
    
   }
   while(n>0);
     cout<<"sum:"<<sum;  
    return 0;
}