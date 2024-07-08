//input:num=[4,1,2,1,2]
//Print the single no. in array 
//output:4
// ^?
//  0 0=0
//  1 1=0
//  1 0=1
//  0 1=1
#include<iostream>
using namespace std;
int main()
{
    int num=0;
    int arr[5]={4,1,2,1,2};
    for(int i=1;i<5;i++)
    {
        num=num^arr[i];  
        }
    return 0;
}
// num=num+arr[i]
// 0=0^4  0=0000^0100=01000(4)
// 4=4^1  4=0100^0100=0101(5)
// 5=5^2  
// 7=7^1
// 6=6^2
//num =4
