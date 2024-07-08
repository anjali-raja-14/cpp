#include <iostream>
using namespace std;
int main()
{  int ch;
    do{
 int first,second,third,element;
 cout<<"Enter the First Value: ";
 cin>>first;
 cout<<"Enter the Second Value: ";
 cin>>second;
 cout<<" How many elements(0>5)?: ";
 cin>>element;
 cout<<first<<" "<<second;
 for(int i=1;i<=element;i++)
 {
   third=first+second;
   cout<<" "<<third;
   first=second;
   second=third;
 }
 cout<<"\nDo u Wants to Continue(0/1): ";
 cin>>ch;
    }while(ch!=0);
}