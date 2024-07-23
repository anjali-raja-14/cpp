#include <iostream>
using namespace std;
int n;
int arr[25];
void array();
int maximum();
int minimum();
int main()
{
    cout << "Enter the size of array: ";
    cin >> n;
    array();
    cout << "Maximum: " << maximum()<<endl;
    cout<<"Minimum: "<<minimum();
}

// ARRAY PRINT
void array()
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the  no: ";
        cin >> arr[i];
    }
}
// MAX ELEMENT
int maximum()
{
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
// MIN ELEMENT
int minimum()
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}