//LINEAR EQUATION
#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    float a,b,c;
    float x,y;
    //Linear Equation in one variable
    if(a==0||b==0)
    {
        cout<<"a and b should not e zero"<<endl;
    }
    else
    {
    cout<<"Linear Equation in one variable:"<<endl;
    cout<<"Ax+B=0"<<endl;
    cout<<"Enter the Value of a: ";
    cin>>a;
    cout<<"Enter the Value of b: ";
    cin>>b;
    x=-b/a;
    cout<<"The value of x : "<<x;
    }

    return 0;
}