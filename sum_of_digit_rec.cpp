#include<iostream>
using namespace std;
int sum_of_digit(int n);
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"sum of a number is : "<<sum_of_digit(n);
    return 0;
}
int sum_of_digit(int n)
{
if(n==0)//base case (where to stop calling)
{
    return 0;
}
else
{
return (n%10)+sum_of_digit(n/10);
}
}
