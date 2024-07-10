// erase-> to delete particular element
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int>::iterator it;
    cout << "Elements\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }
    v.erase(v.begin() + 3);
    v.erase(v.begin(), v.begin() + 3);
    cout << "\nElements after erase\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }
    return 0;
}