
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
 int n;
 cout<<"Enter the number:";
 cin>>n;
 int fact=1;
for(int i=n;i>=1;i--)
{
fact=fact*i;
}
cout<<"The factorial is:"<<fact;
    return 0;
}
