//total no. should be 10 (+&- both)and sum of + no.only 
#include<iostream>
using namespace std;
int main()
{
    int count=0,sum=0;
    do{
        int n;
        cout<<"Enter a no: ";
        cin>>n;
        count++;
        if(n<0)
        {
            continue;
        } 
        sum=sum+n;
    }while(count!=10);
     cout<<"sum: "<<sum;  
}