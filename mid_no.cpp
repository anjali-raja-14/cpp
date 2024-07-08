
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"The "<<i<<"no is:";
        cin>>arr[i];
    }
   int start=0;
   int end=n;
   int mid=(start+end)/2;
    cout<<endl<<"middle no. is "<<arr[mid];
}
