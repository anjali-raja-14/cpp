//2^4=?
#include<iostream>
using namespace std;

unsigned long long power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
return n*power(n,p-1);
}

int main()
{
int n,p;
cout<<"Enter the value of n: ";
cin>>n;
cout<<"enter the value of power: ";
cin>>p;
cout<<n<<"^"<<p<<"="<<power(n,p);
    return 0;
}