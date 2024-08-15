
#include<iostream>
#include<cmath>
using namespace std;
    int main()
    {
         unsigned int  power;
         unsigned int range=0;
    for(int i=0;i<=31;i++)
    {
        range=range+pow(2,i);
    }
    cout<<range<<endl;
    return 0;
}
