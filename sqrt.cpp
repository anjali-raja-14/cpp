#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the no.:";
  cin>>n;
  int sqrt,cube;
  for(int i=1;i<=n;i++)
  {
    sqrt=i*i;
    cube=i*i*i;
    cout<<i<<"*"<<i<<"="<<sqrt<<"    "<<i<<"*"<<i<<"*"<<i<<"="<<cube<<endl<<endl; 
  } 
}