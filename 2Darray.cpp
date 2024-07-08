#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the Size of row: ";
    cin>>r;
    int c;
    cout<<"Enter the Size of Column: ";
    cin>>c;
    int arr[r][c];
    cout<<"You have to Enter "<<r*c<<" elements"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Enter the ("<<i<<","<<j <<" )"<<"element:";
            cin>>arr[i][j];
        }
    }
    return 0;
}
