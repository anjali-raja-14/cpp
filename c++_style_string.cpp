// c++ style string
#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter your String: ";
    getline(cin, str);
    cout << "your string: " << str << endl;

    // STRING ADDITION
    cout << "String Addition: ";
    string str1;
    str1 = ("Anjali");
    string str2 = "Yash Raja";
    cout << str1 +" "+ str2;

    // STRING COPY str2 TO str3
    cout << "\nString copy :";
    string str3{str2};
    cout << str3 << endl;

    // MUltiple times
    cout << "MUltiple times:";
    string str4(5, 'a');
    cout << str4 << endl;

    // ACCESS
    cout << "Access elements: ";
    string str5{str1, 1,4}; // anjali->njal
    cout << str5<<endl;
    string str6 = {"Himanshu", 3}; // himanshu->him
    cout << str6 << endl;
    cout << str1.at(2) << endl; // anjali->j
    string str7 = ("Kashish");

    // accessing all
    cout << str7[1] << endl;
    for (auto c : str7)//print ->kashish
    {
        cout << c;
    }

    // size
    cout << str1.size();//6
    cout << str1.length();//6

    return 0;
}