#include <iostream> 
using namespace std;
int main() 
{ 
	int n;
    cout<<"Enter the no:";
    cin>>n;
    for(n;n>0;n--)
    {
        cout<<n;
        if(n==3)
        break;
    }
	return 0; 
} 

