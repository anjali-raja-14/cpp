#include <iostream>
using namespace std;
int main()
{
    int n;
cout<<"Enter the size of array: ";
cin>>n;
int arr[n];
int i;
for(i=0;i<=n;i++)
{
    arr[i]=0;
    arr[0]=10;
    arr[n]=150;
cout<<"The "<<i<<" element : "<< arr[i]<<endl;

}
    return 0;
}