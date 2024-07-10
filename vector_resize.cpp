#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char>vowels={'a','e','i','o'};
    cout<<"size of vector: "<<vowels.size()<<endl;
    cout<<"Max size of vector: "<<vowels.max_size()<<endl;
    cout<<"capacity of vector: "<<vowels.capacity()<<endl;
    vowels.resize(10);
     cout<<"size of vector: "<<vowels.size()<<endl;
    cout<<"Max size of vector: "<<vowels.max_size()<<endl;
    cout<<"capacity of vector: "<<vowels.capacity()<<endl;
    vowels.reserve(100);
    cout<<"size of vector: "<<vowels.size()<<endl;
    cout<<"Max size of vector: "<<vowels.max_size()<<endl;
    cout<<"capacity of vector: "<<vowels.capacity()<<endl;
    return 0;
}
