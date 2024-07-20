
//call by reference 
#include<iostream>
using namespace std;

void modify(int &x) { // parameter
    x = 50; // assign 50 to the variable passed by reference
    cout << x << endl;
}

int main() {
    int a = 10;
    cout << "before calling: ";
    cout << a << endl;
    modify(a); // arguments
    cout << "After calling: ";
    cout << a << endl;
    return 0;
}




