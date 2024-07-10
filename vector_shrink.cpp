#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v = {1, 2, 3, 4, 5};
    cout << "size:" << v.size() << endl;
    v.resize(10);
    cout << "Resize to 10\n";
    cout << "size:" << v.size() << endl;
    cout << "capacity:" << v.capacity() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\t";
    }
    v.shrink_to_fit();
    cout << "\nshrink to fit:" << v.capacity();
    return 0;
}