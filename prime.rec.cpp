#include <iostream>
using namespace std;
int prime(int n);
int main()
{
    int n;
    cout << "Enter the no";
    cin >> n;
    cout<<prime(n);
    return 0;
}
int prime(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % prime(n - 1))==0;
    }
}
