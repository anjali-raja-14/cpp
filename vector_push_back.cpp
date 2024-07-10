
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int val;
    do
    {
    cout<<"Enter the value: ";
    cin>>val;
    v.push_back(val);//insert elements
    }
    //if value 0 exit 
    while(val);
    cout<<"vector elements : ";
    for(int i=0;i<v.size();i++)
    {
     cout<<v[i]<<"\t";
    }
    v.pop_back();//delete back 
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"\nvector elements after pop: ";
    for(int i=0;i<v.size();i++)
    {
     cout<<v[i]<<"\t";
    }
    return 0;
}