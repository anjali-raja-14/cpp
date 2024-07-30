
#include <iostream>
#include <iomanip>
using namespace std;
unsigned long long square_no(int n);
int main()
{
    while (true)
    {
        int n;
        cout << "Enter the day: ";
        cin >> n;
        if (n == 0)
        {
            break;
        }
        cout << square_no(n) << endl;
    }
    return 0;
}
unsigned long long square_no(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return 2 * square_no(n - 1);
    }
}
