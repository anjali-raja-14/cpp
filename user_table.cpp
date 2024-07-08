#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int n;
    cout<<"Enter the Value of n: ";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<" x "<<i<<" = "<<i*n<<endl;
    }
    return 0;
    
}