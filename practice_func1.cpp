#include <iostream>
#include<vector>
using namespace std;
void print_array();
void erase_array();
int main()
{
    print_array();
    erase_array();
    print_array();

    return 0;
}
void print_array()
{
    string arr[3]={"Anjali","yash","Kashish"};
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i]<<endl;
    }
}
void erase_array()
{
    for (int i = 0; i < 3; i++)
    {
        cout << " "<<endl;
    
    }
}