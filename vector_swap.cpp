#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {6, 7, 8, 9, 10};
    // print vector 1
    cout << "Vector 1:\n";
    for (auto n : v1)
    {
        cout << n << "\t";
    }
    // print vector 1
    cout << "\nVector 2:\n";
    for (auto n : v2)
    {
        cout << n << "\t";
    }
    // swap code
    v1.swap(v2);
    cout << "\nAfter swaping:\n";
    cout << "Vector 1:\n";
    // print vector 1
    for (auto n : v1)
    {
        cout << n << "\t";
    }
    // print vector 2
    cout << "\nVector 2:\n";
    for (auto n : v2)
    {
        cout << n << "\t";
    }
    return 0;
}