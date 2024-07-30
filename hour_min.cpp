#include <iostream>
using namespace std;
int main()
{
    string reset = "\033[0m";
    string yellow = "\033[1;33m";

    bool continueLoop = true;
    do
    {
        int n;
        cout << yellow << "Enter the minutes: " << reset;
        cin >> n;
        if (cin.fail())
        {
            cout << "Invalid input. Please enter a number." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        
        int hour = (n / 60);
        int min = (n % 60);
        cout << yellow << hour << " hour" << ":" << min << " min" << endl
             << reset;
              char ch;
        cout << yellow << "Do you wants to continue(y/n): " << reset;
        cin >> ch;
        continueLoop = (ch == 'y');
    } while (continueLoop);
    return 0;
}

