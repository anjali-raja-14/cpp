#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int sum=0;
    int i;
    for( i=1;i<=15;i++)
    {
        if(i%2!=0)
        {
        sum=sum+i;
         cout<<i<<"+";
        }
       
    }
    cout<<"="<<sum;

    return 0;
}