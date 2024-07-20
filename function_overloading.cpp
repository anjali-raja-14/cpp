//FUNCTION OVERLOADING
#include<iostream>
using namespace std;
void display(double a)
{
    cout<<"The value of a: "<<a<<endl;
}
void display(string str)
{
    cout<<"The string is: "<<str<<endl;
}
int main()
{
display(5);
display("Anjali");
    return 0;
}
