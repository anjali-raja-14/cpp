//print the array elements

#include<iostream>
#include<vector>
using namespace std;
int main()
{   
   vector<int>numbers;
   int value;
   for(int i=0;i<5;i++)
   {
    cout<<"Enter Value: ";
    cin>>value;
    numbers.push_back(value);
   }
   cout<<numbers[1];
}










