//run time vector size
#include <iostream>
#include <vector>
#include<conio.h>
using namespace std;
int main()
{
    vector<int> v[5];
    for (int i = 0; i < 5; i++) // rows
    {
        int n;
        cout << "Enter the size of vector(" << i + 1<<"): ";
        cin >> n;
        for (int j = 0; j < n; j++) // column
        {
            int a;
            cout << "Enter the value: ";
            cin >> a;
            v[i].push_back(a);
        }
    }
    //print all the elements 
    for (int i = 0; i < 4; i++) // rows
    {
        for (int j = 0; j < v[i].size(); j++) // dynamic columns
        {
            cout << v[i][j]<<"\t";
        }
        cout<<endl;
    }
     getch(); 
    return 0;
}

// //fix push_back
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v[4];
//     v[0].push_back(1);
//     v[0].push_back(2);
//     v[0].push_back(3);
//     v[0].push_back(4);
//     v[0].push_back(5);
//     v[1].push_back(11);
//     v[1].push_back(12);
//     v[1].push_back(13);
//     v[1].push_back(14);
//     v[2].push_back(21);
//     v[2].push_back(22);
//     v[2].push_back(23);
//     v[3].push_back(31);
//     v[3].push_back(32);
//     v[3].push_back(33);
//     v[3].push_back(34);
//     for (int i = 0; i < 4; i++) // rows
//     {
//         for (int j = 0; j < v[i].size(); j++) // dynamic columns
//         {
//             cout << v[i][j]<<"\t";
//         }
//         cout<<endl;
//     }
//         return 0;
//     }

