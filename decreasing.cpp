#include <iostream>
using namespace std;
void decreasing(int n);
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    decreasing(n);
    return 0;
}
void decreasing(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n<<"\t";
    return decreasing(n - 1);
}
