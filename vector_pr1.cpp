// erase ->delete even no
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int>::iterator it;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }
    cout << "after delete";
    it = v.begin();
    while (it != v.end())
    {
        if (*it % 2 == 0)
        {
            v.erase(it);
        }
        else
        {
            it++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }

    return 0;
}