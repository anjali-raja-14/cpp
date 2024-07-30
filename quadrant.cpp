#include <iostream>
using namespace std;
int main()
{
    string reset = "\033[0m";
    string green = "\033[1;32m";
    string yellow = "\033[1;33m";
    string blue = "\033[1;94m";
    string magenta = "\033[1;35m";
    string cyan = "\033[1;36m";
    string bold = "\033[1;1m";
    char ch;
    do
    {
        int x;
        cout << bold << "Enter the value of x: " << reset;
        cin >> x;
        int y;
        cout << bold << "Enter the value of y: " << reset;
        cin >> y;
        if ((x == 0) && (y == 0))
        {
            cout << green << "The point lies in the origin\n"
                 << reset;
        }
        else if ((x > 0) && (y > 0))
        {
            cout << blue << "The point lies in the first quadrant\n"
                 << reset;
        }
        else if ((x < 0) && (y > 0))
        {
            cout << magenta << "The point lies in the second quadrant\n"
                 << reset;
        }
        else if ((x < 0) && (y < 0))
        {
            cout << cyan << "The point lies in the third quadrant\n"
                 << reset;
        }
        else if ((x > 0) && (y < 0))
        {                                                                   
            cout << green << "The point lies in the fourth quadrant\n"
                 << reset;
        }
        else if ((x == 0) && (y > 0))
        {
            cout << cyan << "The point lies on the positive Y axis \n"
                 << reset;
        }
        else if ((x == 0) && (y < 0))
        {
            cout << blue << "The point lies on the negative Y axis \n"
                 << reset;
        }
        else if ((x > 0) && (y == 0))
        {
            cout << green << "The point lies on the positive X axis \n"
                 << reset;
        }
        else if ((x < 0) && (y == 0))
        {
            cout << magenta << "The point lies on the negative X axis \n"
                 << reset;
        }
        cout << yellow << "Do you wants to continue(y/n): " << reset;
        cin >> ch;
       } 
       while (ch == 'y');
       return 0;
}
