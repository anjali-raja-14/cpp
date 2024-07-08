#include <iostream>
using namespace std;
int main()
{    char choice;
    do
    {  int length,breadth,area;
      cout<<"Enter Length: ";
      cin>>length;
      cout<<"Enter Breadth: ";
      cin>>breadth;
      cout<<"The Area of Rectanle : "<<(area=length*breadth)<<endl;
      cout<<"Want more Area (Enter Your choice (Ye/No))??:";
      cin>>choice;
    } while (choice=='y'||choice=='Y');
    //other than y or Y the loop will exit from the loop 

    return 0;
}