#include<iostream>
using namespace std;
unsigned long long factorial(int n);
int main()
{
  while(true)
  {
    
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<n<<"!="<<factorial(n)<<endl;
     if(n==0)
    {
        break;
    }
  }
    return 0;
   
}
unsigned long long factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
   {
     return n*factorial(n-1);
   }
}