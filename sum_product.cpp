#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
int n;
cout<<"Enter the size of:";
cin>>n;
int arr[n];
for(int i=0;i<=n;i++)
{
    cout<<"The"<<" "<<i<<"no.is: ";
    cin>>arr[i];
}
int sum=0;
int product=1;

for(int i=0;i<=n;i++)
{
    sum=sum+arr[i];
    product=product*arr[i];
}
cout<<"The sum of all the numbers is:"<<sum<<endl;
cout<<"The  product of all the numbers is:"<< product;
return 0;
}
