#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
     cin>>b;
    cout<<"Enter the value of c:";
     cin>>c;
    if(a>b&&a>c)
    {
      cout<<a<<"  is maximum"<<endl ; 
    }
    else if (a<b&&a<c)
    {
        cout<<a <<" is smallest"<<endl;
    }
    else if (a==b)
    {

        cout<<a<<" is equal to"<<b<<endl;
    }
    if(b>a&&b>c)
    {
        cout<<b<<" is maximum"<<endl;
    }
    else if (b<a&&b<c)
    {
        cout<<b <<" is smallest"<<endl;
    }
    else if (b==c)
    {
        cout<<b<<" is equal to"<<c<<endl;
    }

     if(c>a&&c>b)
     {
        cout<<c<< " is maximum"<<endl;
     }
      else if(c<a&&c<b)
        {
        cout<<c <<  "is smallest"<<endl;
        }
        else if (c==a)
        {
            cout<<c<< " is equal to "<<a<<endl;
        }
    
    return 0;
}