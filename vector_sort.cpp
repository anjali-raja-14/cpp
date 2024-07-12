// sorting code
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> vector = {0, 9, 8, 7, 6, 5, 4};
    // print elements
    for (auto n : vector)
    {
        cout << n << "\t";
    }
    // sorting code
    sort(vector.begin(), vector.end());

    // print elements
    cout << "\nElements after sort\n";
    for (auto n : vector)
    {
        cout << n << "\t";
    }
    return 0;
}
