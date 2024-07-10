#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>numbers={1,2,3,4,5,6,7,8,9};
    cout<<"No. at 0 index: "<<numbers[0]<<endl;
    //Modify
    numbers.at(0)=10;
    cout<<"No. at 0 index: "<<numbers.at(0);
    
    return 0;
}