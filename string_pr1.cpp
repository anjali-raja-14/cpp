#include<iostream>
using namespace std;
int main()
{
    string str={"AnjaliRaja"};
    string f_name={str,0,6};
    cout<<"First Name:"<<f_name<<endl;
    string l_name=str.substr(6,11);
    cout<<"Last Name: "<<l_name<<endl;
    string formatted_name=f_name+l_name;
    cout<<formatted_name<<endl;
    formatted_name=formatted_name.insert(6," ");
    cout<<formatted_name;
    

    return 0;
}
