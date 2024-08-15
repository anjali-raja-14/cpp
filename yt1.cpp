#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    int i;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    for (int i = 0; i <= str.length(); i++)
    {

        if (str[i] == '*')
        {
            count1++;
        }
        if (str[i] == '#')
        {
            count2++;
        }
    }
    cout << "Total *: " << count1 << endl;
    cout << "Total #: " << count2 << endl;

    if (count1 > count2)
    {
        cout << "* is Greater than #";
    }
    else if (count1 < count2)
    {
        cout << "* is Smaller than #";
    }
    else if (count1 = count2)
    {
        cout << "* is Equal to #" ;
    }
    return 0;
}