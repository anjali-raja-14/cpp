#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main()
{   int sum=0;
    vector<pair<int,int>>v{{1,2},{3,4},{5,6},{7,8},{9,10},{11,12}};
    for(auto n:v)
    {
    sum=sum+n.second;
    cout<<n.second<<"\t";
    }
    cout<<endl<<"sum:"<<sum;
    return 0;
}