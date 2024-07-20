// FIBONACCI SERIES USING FUNCTION
#include <iostream>
using namespace std;

void fibo(int a); // declaration

int main()
{
    int n;
    cout << "Enter the no.of terms: ";
    cin >> n;
    fibo(n); // calling
    return 0;
}

void fibo(int a) // definiton
{
    int x = 0;
    int y = 1;
    int nextterm;
    for (int i = 1; i <= a; i++)
    {
        cout << x <<"\t";
        nextterm = x + y;
        x = y;
        y = nextterm;
    }
    return;
}
