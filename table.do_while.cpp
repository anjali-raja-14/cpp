#include <iostream>
using namespace std;
int main()
{
    char ch;
    do
    {
    int n;
    cout<<"Enter a positive number: ";
    cin>>n;
    for(int i=1;i<=10;i++)
{
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
}
    cout<<"Do You Wants to Continue(y/n): ";
    cin>>ch;
     } while(ch=='y'||ch=='Y');  
}
