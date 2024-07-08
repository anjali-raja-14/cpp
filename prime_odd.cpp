//write a program to find the no. is odd or even  or prime with do while 
#include <iostream>
using namespace std;
int main()
{    char ch;
    do{
    int n,count=0;
    cout<<"Enter the value of n: ";
    cin>>n;
     if(n%2==0)
    {
        cout<<"The number is even\n";
    }
    else
    {
        cout<<"The number is odd\n";
    }
    for(int i=1;i<=n;i++)
    {
      if(n%i==0)
      count++;
    }
    if(count==2)
    {
        cout<<"The number is Prime\n";
    }
    else{
        cout<<"The number is not prime\n";
    } 
      cout<<"Do you wants to continue(y/n)";
      cin>>ch;
    }while(ch=='y'||ch=='Y');

return 0;
}