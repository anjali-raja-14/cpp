#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number between 2 and 6:";//not include 2 and 6
    cin>>n;
    while(n<=2||n>=6)//negation 
    {
        cout<<"Pls!!! Enter Valid Number: ";
        cin>>n;
    }
    cout<<"Thanks!!!";
    return 0;
}