//FIND THE DIFFRENCE BETEWWN THE ODD AND EVEN NO.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a no: ";
    cin>>n;
    int even=0;
    int odd=0;
    while(n>0)//rem
    {
     int r=n%10;//ques
     if(r%2==0)
     {
     even=even+r;
     }
     if(r%2!=0)
     {
     odd=odd+r;
     }
    n=n/10;
    }
    cout<<"Total even no:"<<even<<endl;
    cout<<"Total odd no:"<<odd<<endl;
    if(odd>even)
    {
    int diff=(odd-even);
    cout<<"Diffrence: "<<diff;
    }
    else
    {
        int diff=-(even-odd);
        cout<<"Diffrence: "<<diff;
    }
    return 0;
}