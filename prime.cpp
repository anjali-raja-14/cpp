//PRIME NUMBER?
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
 {
    int n,i;
    cout<<"Enter a number:";
    cin>>n;
    int count=0;
    cout<<"The factors are:";
    for( i=1; i<=n; i++)
     {
        if(n%i==0)
        {
            cout<<i<<" ";
            count++;
        }
    }
    cout<<endl<<"The total factors are:"<<count;
    if(count==2)
     {
        cout<<endl<<"The number is prime";
    }

    else 
    {
        cout<<endl<<"The  number is not a prime";
    }
    return 0;
}


