#include<iostream>
using namespace std;
unsigned long long natural_no(int n);
int main()
{
  while(true)
  {
    
    int n;
    cout<<"Enter a number(0 to stop): ";
    cin>>n;
    cout<<"sum of 1 to "<<n<<":"<<natural_no(n)<<endl;
     if(n==0)
    {
        break;
    }
  }
    return 0;
   
}
unsigned long long natural_no(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
   {
     return n+natural_no(n-1);
   }
}