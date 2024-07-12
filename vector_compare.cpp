#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int main()
{
    auto p1 = make_pair("Anjali", 20);
    auto p2 = make_pair("Anjali", 29);
    cout << (p2 > p1) << endl;
    cout << (p2 != p1) << endl;

    auto p3 = make_pair("Anjali", 20);
    auto p4 = make_pair("Anjali", 20);
    cout << (p3 == p4) << endl;
    return 0;
}
