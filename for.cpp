#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int n,sum=0;
    cout<<"Enter the value of n: " ;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
      if(i%2==0)
      {
    sum=sum+i;
    }
    cout<<i<<"+";
    }
      cout<<"="<<sum;
    return 0;
}
