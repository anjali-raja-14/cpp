#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Size of array: ";
    cin>>n;
    char arr[n];
    for(int i=0;i<=n;i++)
{
    cout<<"Enter the  "<<i<<" element: ";
    cin>>arr[i];
}    return 0;
}