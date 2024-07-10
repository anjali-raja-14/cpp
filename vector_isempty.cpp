#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int>v={}; 
    vector<int>v(10);
    vector<int>::iterator it;
    //loop=if size not define
    int count=0;
    for( it=v.begin();it!=v.end();it++)
    {
        cout<<"Enter the number: ";
        cin>>*it;
        count++;
    }
    if(v.empty())
    {
       cout<<"No Element"; 
    }
    else
    {
        cout<<"There are  " <<count<<"  element";
    }
    return 0;
}
