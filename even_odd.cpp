#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
      if(n%2==0)
    {
        cout<<"The number is even"<<endl;
    }
    else
    {
       cout<<"The number is  odd"<<endl;
    }
     cout<<"The factors are:";
    int count=0;
   for(int i=1;i<=n;i++)
   {
    if(n%i==0)
    {
        cout<<i<<"  ";
        count++;
    }
   }
   cout<<endl<<"The total factors are:"<<count<<endl;
    return 0;
}