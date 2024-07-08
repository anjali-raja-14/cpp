#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
 {
  int size ;
  cout<<"Enter the number";
  cin>>size;
  for (int i = 0; i < size; i++) 
  {
    for (int j = 0; j < size; j++)
    {
      cout << "  *";
    }
    cout << endl;
  }
  return 0;
}