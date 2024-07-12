#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int main()
{
    vector<pair<int, string>> student_rollno{{1, "Anjali Raja"}, {2, "Falaq Raja "}};
    cout << "Print all elements in the array :"<<endl;
    for (int i = 0; i < student_rollno.size(); i++)
    {
        cout << student_rollno[i].first << " " << student_rollno[i].second << endl;
    }

    cout << "\n";
    cout << "Insert 3 elements in the array: "<<endl;
    student_rollno.push_back({3, "Kashish Raja"});
    student_rollno.push_back({4, "Yash Raja"});
    student_rollno.push_back({5, "Rudra Raja"});
    for (int i = 0; i < student_rollno.size(); i++)
    {
        cout << student_rollno[i].first << " " << student_rollno[i].second << endl;
    }

    cout << "\n";
    cout << "Erase the 3rd element in the array: "<<endl;
    student_rollno.erase(student_rollno.begin() + 2);
    for (int i = 0; i < student_rollno.size(); i++)
    {
        cout << student_rollno[i].first << " " << student_rollno[i].second << endl;
    }

    cout << "\n";
    cout << "Delete the last 2 element in the array: "<<endl;
    student_rollno.pop_back();
    student_rollno.pop_back();
    for (int i = 0; i < student_rollno.size(); i++)
    {
        cout << student_rollno[i].first << " " << student_rollno[i].second << endl;
    }

    return 0;
}
