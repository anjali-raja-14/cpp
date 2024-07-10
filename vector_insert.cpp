// insert with iterator
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5,6};
    vector<int>::iterator it;
    cout<<"Elements\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<"\t";
    }
    cout<<"\nElements after insertion\n";
    //isert at 3rd position
    it=v.begin()+2;
    v.insert(it, 2, 40);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<"\t";
    }

    return 0;
}