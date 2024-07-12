#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> v;
    v.push_back({1, 2, 3, 4});
    v.push_back({1, 6});
    v.push_back({9, 7, 5, 4});
    for (int i = 0; i < v.size(); i++)//rows
    {
        for (auto it = v[i].begin(); it != v[i].end(); it++)//column
        {
            cout << *it << "\t";
        }
        cout << endl;
    }
    return 0;
}
