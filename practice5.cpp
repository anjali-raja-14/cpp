#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
 int n;
 cout<<"Enter the size of array: ";
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
  arr[i]=100;
  cout<<"The " <<i<<" value :" <<arr[i]<<endl; 
 }
 getch();
}