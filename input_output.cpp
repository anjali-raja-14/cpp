#include<iostream>
using std::cout;
using std::cin;

    int main() {
    int age;
    char name[12];
    cout << "Enter the name and age:";
    cin>>name>>age;
    cout << "Your name is   "<< name << " and "<< "age is "<< age;
    return 0;
}