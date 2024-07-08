#include <iostream>
using namespace std;
int main()
{
    int i=0,j;
int arr[4]={2,7,11,15};//1,2
int target=9;
for( i=0;i<4;i++)
{
    for( j=i+1;j<4;j++)
    {
    if(target==(arr[i]+arr[j]))
       cout<<i<<j;
    }    
}
    return 0;
}