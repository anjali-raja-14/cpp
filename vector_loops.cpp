#include<iostream>
#include<vector>
using namespace std;
int main()
{   vector<int>numbers(10);
    for(int i=0;i<numbers.size();i++)
    {
        cout<<"Enter numbers: ";
        cin>>numbers[i];
        cout<<numbers.at(i)<<endl;
    }
    return 0;
}