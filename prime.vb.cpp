#include <iostream>
using namespace std;
int main()
{
    char ch;
    do{
    int n,count=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        count++;
        }
    }
     if(count==2)
        {
            cout<<"Prime no.";
        }
        else
        {
            cout<<"Not prime no.";
        }
        cout<<"\nEnter your choice(y/n): ";
        cin>>ch;
    }while(ch=='y');
    return 0;
}
