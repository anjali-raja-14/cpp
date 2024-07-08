#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
     cout<<"First Array\n";
    for(int i=0;i<=n;i++)
    {
        cout<<"The "<<i<<" element :";
        cin>>arr[i];
    }
    int brr[n];
    cout<<"second Array\n";
    for(int i=0;i<=n;i++)
    {
        cout<<"The "<<i<<" element :";
        cin>>brr[i];
    }
    int crr[n];
    cout<<"Third Array\n";
    for(int i=0;i<=n;i++)
    {
        crr[i]=arr[i]+brr[i];
        cout<<arr[i]<<"+"<<brr[i]<<"="<<crr[i]<<"\n";

    }

    return 0;
}