#include<iostream>
using namespace std;
int natural(int n);
int main()
{
int n;
cout<<"Enter the no";
cin>>n;
natural(n);
}
int natural(int n)
{
if(n>0)
{
  natural(n-1);
  cout<<n<<"\t";
}
}
