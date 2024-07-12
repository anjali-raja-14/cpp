#include <iostream>
#include <utility>
using namespace std;
int main()
{
    pair<int, string> p1;
    p1.first = 20;
    p1.second = "Anjali";

    pair<int, string> p2;
    p2.first = 18;
    p2.second = "Yash";

    cout << "After swapping: " << endl;
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    
    p1.swap(p2);
    cout << "before swapping: " << endl;
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    return 0;
}