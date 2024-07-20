#include <iostream>
using namespace std;

int factorial(int n);//FUNCTION PROTOTYPE

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout<<factorial(n);// FUNCTION CALLING
    return 0; 
}

int factorial( int n)//FUNCTION DEFINITION 
{    
    int fact = 1;
    if(n==1||n==0)
        return 1;
    for (int i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}