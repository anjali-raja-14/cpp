#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Anjali Raja is a good girl";
     //using of iterator
     string ::iterator it;
     for(it=str.begin();it!=str.end();it++)
     {
        cout<<*it;
     }
     cout<<endl<<str.find("Raja");
    return 0;
}
