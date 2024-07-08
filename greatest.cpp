#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) 
    {
        cout<<"The "<< i<<" "<<" number is:";
        cin>>arr[i];
    }

    int max=arr[0];

    for(int i=0; i<n; i++) 
    {
        if(arr[i]>max) 
        {
            max=arr[i];
        }
    }
    cout<<endl<<"Maximum number :"<<max;
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    cout<<endl<<"Minimum number is "<<min;
    return 0;
}