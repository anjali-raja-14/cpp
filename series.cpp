//consider the following series 1 1 2  3 4  9 8  27 16  81 32  243 64  729 128  2187 256  6561 .find the nth term ez....n=16 output 2187 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    int pow1;
    int pow2;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 0; i <= n; i++)//n=16 ?
    {
        pow1 = pow(2, i);
    }
    for (int j = 0; j<= n; j++)//n=16 ?
    {
        pow2= pow(3, j);
    } 
    for(int i=0;i<=n;i++)
    {

    }
    
    int N;
    cout<<"Enter the nth term:  ";
    cin>>N;
    int arr[n];
    for(int i=0;i<=N;i++)
{

    cin>>arr[i];  
}



}
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n % 2 == 0) { // nth term is a power of 2
        int pow3 = pow(2,(n + 1) / 2) ;
        cout << "The " << n << "th term is: " << pow3 << endl;
    } else { // nth term is a power of 3
        int pow2 = pow(3, n / 2);
        cout << "The " << n << "th term is: " << pow2 << endl;
    }

    return 0;
}


