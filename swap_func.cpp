#include<iostream>
using namespace std;
int swap(int &x,int &y);
int main()
{
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a;
    cin>>b;
    cout<<"a= "<<a<<"\t"<<"b="<<b<<endl;
    cout<<"The value after swap():"<<endl;
    swap(a,b);
    cout<<"a= "<<a<<"\t"<<"b="<<b<<endl;
}
int swap(int &x,int &y)//function
{
int temp;
temp=x;
x=y;
y=temp;
}