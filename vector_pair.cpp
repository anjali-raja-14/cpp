//ways to initialise pairs in vectors
#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main()
{
    pair<int,float>p1(91,92.89);
    pair<int,float>p2;
    p2=make_pair(91,92.89);
    auto p3=make_pair(91,92.89);
    pair<bool,string>p4;
    p4.first=true;
    p4.second="Anjali";
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;
    cout<<p4.first<<" "<<p4.second<<endl;
    




    return 0;
}