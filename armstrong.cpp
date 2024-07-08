//ARMSTRONG?
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
//1 5 3  =1*1*1 +5*5*5 +3*3*3=1 5 3
int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    int c=n,r,arm=0;
    while(n>0)
    {
       r=n%10;//r=153%10=3,r=3
       arm=(r*r*r)+arm;//arm=(3*3*3)+0,arm=27
       n=n/10;//n=153/10,15
    }
    if(c==arm)
    {
        cout<<"The number is armstrong";
    }
    else{
       cout<<"The number is not armstrong";
    }
    return 0;
    
}
