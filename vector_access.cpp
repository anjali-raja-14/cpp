#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>numbers={1,2,3,4,5};

       cout<<"No. at index 3: "<<numbers[3]<<endl;
       cout<<"No. at index 3: "<<numbers.at(3)<<endl;
        // print front number 
       cout<<"No. at index 1: "<<numbers.front()<<endl;
       //print back number
       cout<<"No. at index 4: "<<numbers.back()<<endl;
        return 0;
}