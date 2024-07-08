//input:num=[4,1,2,1,2]
//Print the double no. in array 
//output:1,2

#include<iostream>
using namespace std;
int main()
{
    int arr[5]={4,2,2,3,3};
    for(int i=1;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
          if(arr[i]==arr[j])
          cout<<arr[i]<<arr[j];
        }
        }
    return 0;
}
